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
    #修复Xcode14.3、pod1.12.0 打包报错的问题，升级好了之后可以删掉
    shell_script_path = "Pods/Target Support Files/#{target.name}/#{target.name}-frameworks.sh"
    if File::exists?(shell_script_path)
      shell_script_input_lines = File.readlines(shell_script_path)
      shell_script_output_lines = shell_script_input_lines.map { |line| line.sub("source=\"$(readlink \"${source}\")\"", "source=\"$(readlink -f \"${source}\")\"") }
      File.open(shell_script_path, 'w') do |f|
        shell_script_output_lines.each do |line|
          f.write line
        end
      end
    end
    
    #最低适配到9.0
    target.build_configurations.each do |config|
      config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = '11.0'
    end
    
  end
end

end
