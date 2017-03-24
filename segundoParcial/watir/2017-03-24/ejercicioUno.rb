#http://bit.ly/watir-example
require 'rubygems'
require 'watir'

browser = Watir::Browser.new:firefox

browser.goto'http://bit.ly/watir-example'

browser.text_field(:id => 'entry_1000000').set 'Texto de prueba'
browser.textarea(:id => 'entry_1000001').set "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.
  \n Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.
  \n Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.
  \n Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum."
browser.radio(:id => 'group_1000002_1').click

dropdown = browser.checkboxes(:id => /group_1000003/)
dropdown.map do |p|
    if p.value.include? 'y'
        p.click
    end
end

puts "El dropdown tiene #{browser.select_list(:id => 'entry_1000004').options.size}"
browser.select_list(:id => 'entry_1000004').select_value("Firefox")

browser.radio(:id => 'group_1000005_3').click
browser.radio(:id => 'group_1000006_5').click
browser.radio(:id => 'group_1000007_1').click

sleep(3)
browser.button(:id => 'ss-submit').click
sleep(5)
browser.close
