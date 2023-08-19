#pragma once
#include <cstdint>
#include "FTemplateSectionPropertyScale.hpp"
#include "UMovieSceneSubSection.hpp"
#pragma pack(push, 1)
class UTemplateSequenceSection : public UMovieSceneSubSection {
public:
    char pad_168[0x8];
    TArray<FTemplateSectionPropertyScale> PropertyScales; // 0x170
    static UTemplateSequenceSection* StaticClass();
}; // Size: 0x180
#pragma pack(pop)
