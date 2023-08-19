#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FMovieSceneObjectBindingID.hpp"
#include "FTransform.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneCameraCutSection : public UMovieSceneSection {
public:
    char pad_e8[0x8];
    bool bLockPreviousCamera; // 0xf0
    char pad_f1[0x3];
    FGuid CameraGuid; // 0xf4
    FMovieSceneObjectBindingID CameraBindingID; // 0x104
    char pad_11c[0x4];
    FTransform InitialCameraCutTransform; // 0x120
    bool bHasInitialCameraCutTransform; // 0x150
    char pad_151[0xf];
    static UMovieSceneCameraCutSection* StaticClass();
    void SetCameraBindingID(FMovieSceneObjectBindingID& InCameraBindingID);
    FMovieSceneObjectBindingID GetCameraBindingID();
}; // Size: 0x160
#pragma pack(pop)
