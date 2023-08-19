#pragma once
#include <cstdint>
#include "EAccessibilityAudioCueEventType.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class UDataTable;
class UClass;
class UCanvasPanel;
class UUIAccessibilityAudioCueWidget;
class UMaterialInterface;
class AActor;
#pragma pack(push, 1)
class UUIAccessibilityManager : public UObject {
public:
    char pad_28[0x68];
    UDataTable* AudioCueDataTable; // 0x90
    UClass* IconRenderWidgetClass; // 0x98
    UMaterialInterface* IconRenderWidgetSimpleMaterial; // 0xa0
    char pad_a8[0x68];
    static UUIAccessibilityManager* StaticClass();
    static void TriggerAccessibilityEventLeave(EAccessibilityAudioCueEventType EventType, AActor* EventActor);
    static void TriggerAccessibilityEventEnter(EAccessibilityAudioCueEventType EventType, AActor* EventActor);
    static void TriggerAccessibilityEventDamage(AActor* EventActor, FVector Location, float Angle, float Damage);
    static void TriggerAccessibilityEvent(EAccessibilityAudioCueEventType EventType, AActor* EventActor);
    void DeactivateAudioCues();
    void ActivateAudioCues(UCanvasPanel* pPanel, UUIAccessibilityAudioCueWidget* pWidget);
}; // Size: 0x110
#pragma pack(pop)
