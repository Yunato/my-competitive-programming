# encoding : utf-8

s = gets.to_i

a = []
until a.include?(s)
    a << s
    s = s.even? ? s/2 : 3*s+1
end
puts a.size+1
