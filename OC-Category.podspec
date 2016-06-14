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

  #s.source_files = 'OC-Category/Classes/**/*'


   s.source_files = 'OC-Category/**/*.{h,m}'
   s.public_header_files = 'OC-Category/**/*.{h}'
end
