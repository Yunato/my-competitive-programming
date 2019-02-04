# encoding : utf-8

N = gets.to_i
h = gets.split.map(&:to_i)
result, count = 0, 1
until count > 100
    once = false
    continuous =false
    N.times do |cnt|
        if h[cnt] >= count
            continuous = true
            once = true
        else
            if continuous
                result += 1
            end
            continuous = false
        end
    end
    if !once
        break
    elsif continuous
        result += 1
    end
    count += 1
end
puts result
