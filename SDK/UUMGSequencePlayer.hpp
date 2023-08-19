#pragma once
#include <cstdint>
#include "FMovieSceneRootEvaluationTemplateInstance.hpp"
#include "UObject.hpp"
class UWidgetAnimation;
#pragma pack(push, 1)
class UUMGSequencePlayer : public UObject {
public:
    char pad_28[0x238];
    UWidgetAnimation* Animation; // 0x260
    char pad_268[0x8];
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x270
    char pad_358[0x70];
    static UUMGSequencePlayer* StaticClass();
    void SetUserTag(FName InUserTag);
    FName GetUserTag();
}; // Size: 0x3c8
#pragma pack(pop)
