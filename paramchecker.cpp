bool IsRangeOk(float val, float min, float max)
{
	return (val < min || val > max);
}

bool IsBpmOk(float bpm)
{
	return (IsRangeOk(bpm, 70, 150));
}

bool IsSpo2Ok(float spo2)
{
	return (IsRangeOk(spo2, 80, 100));
}
	
bool IsRespRateOk(float respRate)
{
	return (IsRangeOk(respRate,30,60));
}

bool VitalsAreOk(float bpm, float spo2, float respRate) {
  return ( IsBpmOk(bpm) && IsSpo2Ok(spo2) && IsRespRateOk(respRate));
}
