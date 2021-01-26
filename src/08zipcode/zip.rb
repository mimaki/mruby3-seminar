#! ../../mruby/bin/mruby
begin
  raise ArgumentError.new "Usage: #{$0} <zipcode>" if ARGV.empty?
  raise ArgumentError.new 'Invalid ZIP code' unless ARGV.size > 0 && ARGV[0].size == 7

  # TODO: ここにz2aの処理を記述して下さい

rescue => e
  p e
end
