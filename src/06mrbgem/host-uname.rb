MRuby::Build.new do |conf|
  conf.toolchain

  # include the default GEMs
  conf.gembox 'default'
  # Use mrbgems
  conf.gem :git => 'https://github.com/matsumotory/mruby-uname.git'
end
