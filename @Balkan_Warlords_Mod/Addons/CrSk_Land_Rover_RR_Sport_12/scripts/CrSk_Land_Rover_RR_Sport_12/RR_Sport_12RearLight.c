class RR_Sport_12RearLight extends CarRearLightBase
{
	void RR_Sport_12RearLight()
	{
		m_SegregatedBrakeBrightness = 1.2;
		m_SegregatedBrakeRadius = 5;
		m_SegregatedBrakeAngle = 190;
		m_SegregatedBrakeColorRGB = Vector(1, 0.3, 0.05);
		
		m_SegregatedBrightness = 1.2;
		m_SegregatedRadius = 7;
		m_SegregatedAngle = 140;
		m_SegregatedColorRGB = Vector(1.0, 1.0, 0.8);
		
		m_AggregatedBrightness = 1.2;
		m_AggregatedRadius = 9;
		m_AggregatedAngle = 140;
		m_AggregatedColorRGB = Vector(1, 0.3, 0.05);
		
		FadeIn(0.1);
		SetFadeOutTime(0.1);
		SetVisibleDuringDaylight(false);
		SetCastShadow(false);
		SetFlareVisible(false);
		
		SegregateLight();
	}
}