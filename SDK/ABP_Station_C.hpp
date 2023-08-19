#pragma once
#include <cstdint>
#include "AStation.hpp"
class UCognitionStimuliSourceComponent;
#pragma pack(push, 1)
class ABP_Station_C : public AStation {
public:
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x368
    bool PreviewMeshesVisble; // 0x370
    char pad_371[0x7];
    static ABP_Station_C* StaticClass();
    void Create___Attach_Skel_Mesh_Component();
}; // Size: 0x378
#pragma pack(pop)
