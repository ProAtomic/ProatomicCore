
Pod::Spec.new do |s|
  s.name             = 'ProatomicCore'
  s.version          = '0.7.2'
  s.summary          = "Proatomic's APIs for iOS"
  s.description      = "Proatomic dependencies for iOS."
  s.homepage         = 'http://proatomicdev.com'
  s.license          = { :type => 'Copyright', :text => 'Copyright 2016 ProAtomic' }
  s.author           = { 'Guillermo Saenz' => 'gsaenz@proatomicdev.com' }
  s.source           = { :git => 'https://github.com/ProAtomic/ProatomicCore.git', :tag => s.version.to_s }
  s.ios.deployment_target = '11.0'
  
  s.default_subspecs= [
'Core'
  ]

  s.subspec 'Core' do |ss|
      ss.vendored_frameworks = [ 'ProatomicCore/Frameworks/ProatomicCore-Release-iphoneuniversal/ProatomicCore.xcframework' ]
  end

end
