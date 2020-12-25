MRuby::Build.new do |conf|
  conf.toolchain

  # include the default GEMs
  conf.gembox 'default'
  # Use mrbgems
  conf.gem '../../src/07practice1/banker'

  # C compiler settings
  conf.cc.defines = %w(MRB_UTF8_STRING)
end
