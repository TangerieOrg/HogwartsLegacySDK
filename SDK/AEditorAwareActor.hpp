#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class AEditorAwareActor : public AActor {
public:
    static AEditorAwareActor* StaticClass();
    void PreEditorChangeProperty(FName& PropertyName);
    void PostEditorMove(bool bFinished);
    void PostEditorChangeProperty(FName& PropertyName);
    void EditorTick(float DeltaSeconds);
}; // Size: 0x248
#pragma pack(pop)
