PROPERTIES = 
{
       SCTLastVoteMonth=0;
       SCTLastVoteDay=0;
       SCTLastVoteHour=0;
       SCTLastVoteMin=0;
       SCTLastVoteSec=0;
       SCTLastVP=0;
       STEEMLastVP=0;
}

function Initialize()
  v1 = SKIN:GetMeasure(PROPERTIES.SCTLastVoteMonth)
  v2 = SKIN:GetMeasure(PROPERTIES.SCTLastVoteDay)
  v3 = SKIN:GetMeasure(PROPERTIES.SCTLastVoteHour)
  v4 = SKIN:GetMeasure(PROPERTIES.SCTLastVoteMin)
  v5 = SKIN:GetMeasure(PROPERTIES.SCTLastVoteSec)
  v6 = SKIN:GetMeasure(PROPERTIES.SCTLastVP)
  v7 = SKIN:GetMeasure(PROPERTIES.STEEMLastVP)
end

function Update()
   mon=tonumber(v1:GetValue())
   day=tonumber(v2:GetValue())
   hour=tonumber(v3:GetValue())
   min=tonumber(v4:GetValue())
   sec=tonumber(v5:GetValue())
   lvp=tonumber(v6:GetValue())
   svp=tonumber(v7:GetValue())

   regen_sec=SKIN:GetVariable("sct_regene_sec")

   local dt = {year=2019, month=mon, day=day, hour=hour, min=min, sec=sec}
   last_vote_time= os.time(dt)
   now=os.time(os.date("!*t"))
   past_sec = now-last_vote_time

   regen_percent = regen_sec*past_sec

   sct_votingpower = lvp*0.01 + regen_percent
   steem_votingpower = svp*0.01 + regen_percent

   sctvp = string.format("%3.2f",sct_votingpower)
   svp = string.format("%3.2f",steem_votingpower)

   SKIN:Bang("!SetVariable sct_votingpower "..sctvp)
   SKIN:Bang("!SetVariable MVP "..svp)

end
