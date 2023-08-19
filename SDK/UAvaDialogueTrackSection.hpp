#pragma once
#include <cstdint>
#include "FAvaDialogueTrackSectionData.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UAvaDialogueTrackSection : public UMovieSceneSection {
public:
    FAvaDialogueTrackSectionData SectionData; // 0xe8
    static UAvaDialogueTrackSection* StaticClass();
}; // Size: 0x158
#pragma pack(pop)
