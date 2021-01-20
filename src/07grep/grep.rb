#! ../../mruby/bin/mruby

begin
  raise ArgumentError.new "Usage: #{$0} <pattern> <file>" if ARGV.empty? || ARGV.size < 2

  File.open(ARGV[1], "r") {|file|
    lines = file.readlines
    lines.each_with_index {|line, idx|
      puts "#{idx}: #{line}" if /#{ARGV[0]}/.match(line)
    }
  }
rescue => e
  p e
end
