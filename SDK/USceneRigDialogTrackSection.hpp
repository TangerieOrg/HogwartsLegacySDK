#pragma once
#include <cstdint>
#include "FSceneRigDialogTrackSectionData.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class USceneRigDialogTrackSection : public UMovieSceneSection {
public:
    FSceneRigDialogTrackSectionData SectionData; // 0xe8
    static USceneRigDialogTrackSection* StaticClass();
}; // Size: 0x150
#pragma pack(pop)
