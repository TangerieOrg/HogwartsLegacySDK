#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FMovieSceneObjectBindingID.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieScene3DConstraintSection : public UMovieSceneSection {
public:
    FGuid ConstraintId; // 0xe8
    FMovieSceneObjectBindingID ConstraintBindingID; // 0xf8
    static UMovieScene3DConstraintSection* StaticClass();
    void SetConstraintBindingID(FMovieSceneObjectBindingID& InConstraintBindingID);
    FMovieSceneObjectBindingID GetConstraintBindingID();
}; // Size: 0x110
#pragma pack(pop)
