#pragma once
#include <cstdint>
#include "USceneAction_WeatherSequenceCameraMesh.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceCameraStaticMesh : public USceneAction_WeatherSequenceCameraMesh {
public:
    char pad_d0[0x28];
    static USceneAction_WeatherSequenceCameraStaticMesh* StaticClass();
}; // Size: 0xf8
#pragma pack(pop)
