/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCompanionComplicationDataSource : NTKComplicationDataSource {
    CLKComplicationTemplate * _complicationTemplate;
}

+ (bool)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2;

- (void).cxx_destruct;
- (id)_alarmTemplate;
- (id)_batteryTemplate;
- (id)_breathingTemplate;
- (id)_dateTemplate;
- (void)_localeDidChange:(id)arg1;
- (id)_moonPhaseTemplate;
- (id)_musicTemplate;
- (id)_nextEventTemplate;
- (id)_reminderTemplate;
- (id)_stocksTemplate;
- (id)_stopwatchTemplate;
- (id)_sunriseTemplate;
- (id)_temperatureStringForDegreesFahrenheit:(long long)arg1 convertToCelsius:(bool)arg2;
- (id)_timerTemplate;
- (id)_weatherConditionsTemplate;
- (id)_weatherTemplate;
- (id)_wellnessTemplate;
- (id)_workoutTemplate;
- (id)_worldClockTemplate;
- (id)currentSwitcherTemplate;
- (void)dealloc;
- (id)initWithComplication:(id)arg1 family:(long long)arg2;

@end
