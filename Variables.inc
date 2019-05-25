[Variables]
SteemdURL=https://steemd.com/
SteemstatsURL=https://steemstats.com/#!/
SteemApiURL=https://api.steemjs.com/get_state?path=%2F%40
rewardURL=https://api.steemjs.com/getRewardFund?name=post
ScotapiURL=https://scot-api.steem-engine.com/@
SteemApiJson01=&scope=accounts
SteemApiJson02=&scope=props
SteemApiJson03=&scope=feed_price
MyFontFace=NewMedia Fett
FontSize=27
UserName=twinbraid
PreUserName=twinbraid
Padding=10
file1=file://#CURRENTPATH#DownloadFile\SteemdUserHtml.txt
file2=file://#CURRENTPATH#DownloadFile\SteemdHtml.txt
processLuaFile=#@#vp-calculate.lua
regex00=(?siU).*"voting_power":(.*),".*"vesting_shares":"(.*) VESTS","delegated_vesting_shares":"(.*) VESTS","received_vesting_shares":"(.*) VESTS",
regex01=(?siU)base</samp></th><td><i>(.*) SBD.*reward_balance</samp></th></tr><tr><td><i>(.*) STEEM</i></td></tr><tr><th><samp>recent_claims</samp></th></tr><tr><td><i>(.*)</i>
regex1=(?siU)<th>Voting power</th><td>(.*)</td>
regex2=(?siU)reward_balance</samp></th></tr><tr><td><i>(.*) STEEM</i></td></tr><tr><th><samp>recent_claims</samp></th></tr><tr><td><i>(.*)</i>
regex3=(?siU)base</samp></th><td><i>(.*) SBD
regex4=(?siU)<td>"(.*)<m>M</m> VESTS"</td>
regex5=(?siU)<th>Received vesting shares</th><td><i>(.*) VESTS</i></td>
regexsct=(?siU)"SCT":.*,"last_vote_time":"20..-(..)-(..)T(..):(..):(..)","name".*"symbol":"SCT","voting_power":(\d+)}
updateWebRate=4
updateFileRate=10
MVP=loading..
Reward=loading..
sct_votingpower=loading..
sct_regene_sec=0.00023

Slider=100
XSliderPosition=(#FontSize#*10)
YSliderPosition=(#FontSize#*6.6)

debug1=0
debug2=0
