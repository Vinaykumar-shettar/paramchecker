bool bmpAreOk(float bpm)
{
	if (bpm < 70 || bpm > 150)
		return false;
	else 
		return true;
}

bool spo2AreOk(float spo2)
{
	if (spo2 < 80)
		return false;
	else 
		return true;
}
	
bool respRateAreOk(float respRate)
{
	if(respRate < 30 || respRate > 60)
		return false;
	else 
		return true;
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return ( bmpAreOk(bpm) && spo2AreOk(spo2) && respRateAreOk(respRate));
}
