#!/bin/sh

# 作業ディレクトリのパス
base_path=`pwd`

# コンテストの選択
echo "Please select a contest you want to join."
echo "1. AtCoder"

read select
echo ""

if [ "$select" -eq "1" ];
then
    echo "Join AtCoder"
    service_name="AtCoder"
else
    echo "You may have inputed by mistake"
    exit
fi

# 選択されたコンテストに一度でも出場したことがあるかどうか
# なければディレクトリが存在しない
if [ -e "$service_name" ];
then
    #echo "exist"
    cd "$service_name"
else
    #echo "Not exsit"
    echo "Create new directory (name: $service_name)"
    mkdir "$service_name"
    cd "$service_name"
fi
#pwd

# コンテスト名の入力 (ABC001など)
echo "Please input contest name you want to join. (ex. ABC001)"
read contest_name
echo ""

if [ -e "$contest_name" ];
then
    echo "Already exists file"
    exit
else
    echo "Create new directory (name: ./$service_name/$contest_name)"
    mkdir "$contest_name"
    cd "$contest_name"
fi
#pwd

# 問題の名前をスペース区切りで入力 ('A B C D'など)
echo "Please input questions name separated by spaces."
read questions_name
echo ""
mkdir $questions_name

# ls コマンドでディレクトリ取得は無理っぽい
dir_path=`pwd`
dir_path="$dir_path/*"
dir_paths=`basename ${dir_path}/*`

# dash だと配列が使えなかった
# dash -> bash
dirary+=("$dir_paths")

# 言語情報を作成
lang_info=()
for lang in $(cat $base_path/language.txt);
do
    #echo $lang
    lang_info+=($lang)
done
array_count=${#lang_info[*]}

# 問題別ディレクトリの作成
for path in ${dirary[@]};
do
    cd $path
    #pwd

    index=0
    while [ $index -lt ${#lang_info[*]} ];
    do
        # 言語別ディレクトリの作成
        mkdir "${lang_info[index]}"
        cd "${lang_info[index]}"
        index=`expr $index + 1`

        # テンプレートファイルのコピー
        if [ -e $base_path/template${lang_info[index]} ];
        then
            cp $base_path/template${lang_info[index]} .
            # ${path,} は先頭を小文字へ変換
            mv template${lang_info[index]} ${path,}${lang_info[index]}
        fi
        cd ..
        index=`expr $index + 1`
    done

    cd ..
done

echo "Success!"
echo "Take it easy!!"
exec /bin/bash

#cd ..
#cd ..
#rm -r "$service_name"/"$contest_name"
