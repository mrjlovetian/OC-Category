#
# Be sure to run `pod lib lint OC-Category.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'OC-Category'

  s.version          = '0.3.6.10'

  s.summary          = 'OC语言类目的归类整理, 格式化所有代码！'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
整理了UIKit，CoreData,CoreLocation, MapKit, Founction, QuartCore等框架类目内容，方便开发中的使用.
                       DESC

  s.homepage         = 'https://github.com/mrjlovetian/OC-Category'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { '余洪江' => 'mrjyuhongjianglovetian@gmail.com' }
  s.source           = { :git => 'https://github.com/mrjlovetian/OC-Category.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '7.0'

  #s.source_files = 'OC-Category/Classes/**/*'


   	s.source_files = 'OC-Category/Classes/{UIKit,QuartzCore,CoreData,Foundation,MapKit,CoreLocation}.h'
   	s.public_header_files = 'OC-Category/Classes/{UIKit,QuartzCore,CoreData,Foundation,MapKit,CoreLocation}.h'

	#s.source_files = 'OC-Category/Classes/CoreLocation.h'
   	#s.public_header_files = 'OC-Category/Classes/CoreLocation.h'

	#s.source_files = 'OC-Category/Classes/Foundation.h'
   	#s.public_header_files = 'OC-Category/Classes/Foundation.h'

	#s.source_files = 'OC-Category/Classes/MapKit.h'
   	#s.public_header_files = 'OC-Category/Classes/MapKit.h'
	
	#s.source_files = 'OC-Category/Classes/QuartzCore.h'
   	#s.public_header_files = 'OC-Category/Classes/QuartzCore.h'
	
	#s.source_files = 'OC-Category/Classes/UIKit.h'
   	#s.public_header_files = 'OC-Category/Classes/UIKit.h'
	
	#s.source_files = 'OC-Category/Classes/Categories.h'
   	#s.public_header_files = 'OC-Category/Classes/Categories.h'

	s.subspec 'CoreData' do |ss|
	ss.source_files = 'OC-Category/Classes/CoreData/**/*'
	ss.public_header_files = 'OC-Category/Classes/CoreData/**/*.h'
	end

	s.subspec 'CoreLocation' do |ss|
	ss.source_files = 'OC-Category/Classes/CoreLocation/**/*'
	ss.public_header_files = 'OC-Category/Classes/CoreLocation/**/*.h'
	end

	s.subspec 'Foundation' do |ss|
	ss.source_files = 'OC-Category/Classes/Foundation/**/*'
	ss.public_header_files = 'OC-Category/Classes/Foundation/**/*.h'
	end

	s.subspec 'MapKit' do |ss|
	ss.source_files = 'OC-Category/Classes/MapKit/**/*'
	ss.public_header_files = 'OC-Category/Classes/MapKit/**/*.h'
	end

	s.subspec 'QuartzCore' do |ss|
	ss.source_files = 'OC-Category/Classes/QuartzCore/**/*'
	ss.public_header_files = 'OC-Category/Classes/QuartzCore/**/*.h'
	end

	s.subspec 'UIKit' do |ss|
	ss.source_files = 'OC-Category/Classes/UIKit/**/*'
	ss.public_header_files = 'OC-Category/Classes/UIKit/**/*.h'
	end

end
