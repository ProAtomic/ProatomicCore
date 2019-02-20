#
# Be sure to run `pod lib lint ProatomicCore.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ProatomicCore'
  s.version          = '0.5.7'
  s.summary          = "Proatomic's APIs for iOS"
  s.description      = "Proatomic dependencies for iOS."
  s.homepage         = 'http://proatomicdev.com'
  s.license          = { :type => 'Copyright', :text => 'Copyright 2016 ProAtomic' }
  s.author           = { 'Guillermo Saenz' => 'gsaenz@proatomicdev.com' }
  s.source           = { :git => 'https://github.com/ProAtomic/ProatomicCore.git', :tag => s.version.to_s }
  s.ios.deployment_target = '8.0'
  #s.header_dir= "Proatomic"
  s.default_subspecs= [
'Core'
  ]

  s.subspec 'Core' do |ss|
    ss.vendored_frameworks = [ 'ProatomicCore/Frameworks/ProatomicCore-Release-iphoneuniversal/ProatomicCore.framework' ]
end

end
