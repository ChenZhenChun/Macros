Pod::Spec.new do |s|
#name必须与文件名一致
s.name              = "Macros"

#更新代码必须修改版本号
s.version           = "1.0.2"
s.summary           = "It is a Macros used on iOS, which implement by Objective-C"
s.description       = <<-DESC
It is a Macros used on iOS, which implement by Objective-C.
DESC
s.homepage          = "https://github.com/ChenZhenChun"
s.license           = 'MIT'
s.author            = { "ChenZhenChun" => "346891964@qq.com" }

#submodules 是否支持子模块
s.source            = { :git => "https://github.com/ChenZhenChun/Macros.git", :tag => s.version, :submodules => true}
s.platform          = :ios, '7.0'
s.requires_arc = true

#source_files路径是相对podspec文件的路径
s.source_files = 'Macros/*.h'
s.public_header_files = 'Macros/*.h'
s.frameworks = 'Foundation', 'UIKit'

end
