Pod::Spec.new do |spec|
  spec.name         = 'LibFatTorch-Lite'
  spec.version      = '2.1'
  spec.license      = { :type => 'BSD' }
  spec.homepage     = 'https://github.com/Timeworx/pytorch-lite-ios'
  spec.authors      = { 'Alex Gherghina' => 'alex@timeworx.io' }
  spec.summary      = 'PyTorch Lite prebuilt iOS libraries'
  spec.source       = { :git => 'https://github.com/Timeworx/pytorch-lite-ios.git', :tag => spec.version }
  spec.vendored_frameworks = 'libtorch.xcframework'
end
