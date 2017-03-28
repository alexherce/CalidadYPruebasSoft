require 'rubygems'
require 'watir'

browser = Watir::Browser.new:firefox
browser.goto'https://docs.google.com/forms/d/e/1FAIpQLScibDlJbtkFcjSXUBLmfupPkqKslmHIpjHGHdNberFVSNP6Pw/viewform?c=0&w=1'

browser.text_field(:name => 'entry.565481634').set 'Alejandro Herce'
browser.text_field(:name => 'entry.1599836428').set 'A01021150'
# Black box testing (Soak, stress, load)
q1 = browser.elements(:class_name => 'freebirdFormviewerViewItemsCheckboxChoice').map do |item|
  item
end

if q1.size == 6
  q1[3].click
  q1[4].click
  q1[5].click
end

browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[4]/div[2]/div/content/div/label[4]/div/div[1]/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[6]/div[2]/div/content/div/label[2]/div/div[1]/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[7]/div[2]/div/content/div/label[4]/div/div[1]/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[8]/div[2]/div/content/div/label[1]/div/div[1]/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[9]/div[2]/div[1]/div/div[2]/content/label[5]/div/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[9]/div[2]/div[1]/div/div[3]/content/label[2]/div/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[9]/div[2]/div[1]/div/div[4]/content/label[6]/div/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[9]/div[2]/div[1]/div/div[5]/content/label[5]/div/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[9]/div[2]/div[1]/div/div[6]/content/label[1]/div/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[9]/div[2]/div[1]/div/div[7]/content/label[3]/div/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[9]/div[2]/div[1]/div/div[8]/content/label[6]/div/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[9]/div[2]/div[1]/div/div[9]/content/label[2]/div/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[9]/div[2]/div[1]/div/div[10]/content/label[9]/div/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[9]/div[2]/div[1]/div/div[11]/content/label[5]/div/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[11]/div[2]/div[1]/div[2]').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[11]/div[2]/div[2]/div[3]').click


browser.textarea(:name => 'entry.1943388466').set 'Load testing is the process of putting demand on a software system or computing device and measuring its response. Load testing is performed to determine a systems behavior under both normal and anticipated peak load conditions.'
browser.textarea(:name => 'entry.2061122182').set "Condition coverage is also known as Predicate Coverage in which each one of the Boolean expression have been evaluated to both TRUE and FALSE."
browser.textarea(:name => 'entry.980720621').set "All the possible combinations of outcomes of conditions in a decision (therefore the complete decision table) are tested at least once."
browser.textarea(:name => 'entry.1285916526').set "Stress testing (sometimes called torture testing) is a form of deliberately intense or thorough testing used to determine the stability of a given system or entity. It involves testing beyond normal operational capacity, often to a breaking point, in order to observe the results."


sleep(5)
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[3]/div[1]/div/div').click
