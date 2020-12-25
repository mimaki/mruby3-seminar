#! ../../mruby/bin/mruby
begin
  raise ArgumentError.new "Usage: #{$0} <zipcode>" if ARGV.empty?
  raise ArgumentError.new 'Invalid ZIP code' unless ARGV.size > 0 && ARGV[0].size == 7

  # ZIP SEARCH API SERVICE - http://api.thni.net/jzip/JSON/810/0001.js
  c = SimpleHttp.new('http', 'api.thni.net')
  res = c.get("/jzip/X0401/JSON/#{ARGV[0][0..2]}/#{ARGV[0][3..6]}.js")

  raise "ZIP code (#{ARGV[0]}) is not found." if res['body'].include?('Not Found')
  # "body" => '{"state":"40", "stateName":"福岡県", "city":"福岡市中央区", "street":"天神"}'
  json = JSON::parse(res['body'])
  puts json["stateName"] + json["city"] + json["street"]
rescue => e
  puts e
end
