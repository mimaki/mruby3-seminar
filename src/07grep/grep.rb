#! ../../mruby/bin/mruby

begin
  raise ArgumentError.new "Usage: #{$0} <pattern> <file>" if ARGV.empty? || ARGV.size < 2

  # TODO: ここにmygrepの処理を記述して下さい

rescue => e
  p e
end
