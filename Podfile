# Uncomment the next line to define a global platform for your project
# platform :ios, '9.0'

target 'SilkyWXList' do
  # Comment the next line if you don't want to use dynamic frameworks
  use_frameworks!

  # Pods for SilkyWXList

pod 'IGListKit'
pod 'MJExtension'
pod 'MJRefresh'
pod 'SDWebImage'
pod 'YYKit'

# 输出埋点日志打印
post_install do |installer|
  installer.pods_project.targets.each do |target|
    
    #最低适配到9.0
    target.build_configurations.each do |config|
      config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = '11.0'
    end
    
  end
end

end
