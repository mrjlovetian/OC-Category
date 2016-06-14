#
# Be sure to run `pod lib lint OC-Category.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'OC-Category'
  s.version          = '0.1.0'
  s.summary          = 'OC语言类目的归类整理.'

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
  s.author           = { '房产销冠' => 'mrjyuhongjianglovetian@gmail.com' }
  s.source           = { :git => 'https://github.com/mrjlovetian/OC-Category.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '7.0'

  s.source_files = 'OC-Category/Classes/**/*'
  
  # s.resource_bundles = {
  #   'OC-Category' => ['OC-Category/Assets/*.png']
  # }

	s.subspec 'CoreData' do |cordata|
		cordata.source_file = 'Pod/Classes/CoreData/**/*'
		cordata.public_header_files = 'Pod/Classes/CoreData/**/*.h'
	end

	s.subspec 'CoreLocation' do |location|
                location.source_file = 'Pod/Classes/CoreLocation/**/*'
                location.public_header_files = 'Pod/Classes/CoreLocation/**/*.h'
        end

	s.subspec 'Foundation' do |foundation|
                foundation.source_file = 'Pod/Classes/Foundation/**/*'
                foundation.public_header_files = 'Pod/Classes/Foundation/**/*.h'
        end

	s.subspec 'Mapkit' do |mapkit|
                mapkit.source_file = 'Pod/Classes/Mapkit/**/*'
                mapkit.public_header_files = 'Pod/Classes/Mapkit/**/*.h'
        end

	s.subspec 'QuartzCore' do |quaretzCore|
                quaretzCore.source_file = 'Pod/Classes/QuartzCore/**/*'
                quaretzCore.public_header_files = 'Pod/Classes/QuartzCore/**/*.h'
        end

	s.subspec 'UIKit' do |uikit|
                uikit.source_file = 'Pod/Classes/UIKit/**/*'
                uikit.public_header_files = 'Pod/Classes/UIKit/**/*.h'
        end

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
