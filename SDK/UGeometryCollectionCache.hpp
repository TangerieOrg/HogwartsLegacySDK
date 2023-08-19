#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FRecordedTransformTrack.hpp"
#include "UObject.hpp"
class UGeometryCollection;
#pragma pack(push, 1)
class UGeometryCollectionCache : public UObject {
public:
    FRecordedTransformTrack RecordedData; // 0x28
    UGeometryCollection* SupportedCollection; // 0x38
    FGuid CompatibleCollectionState; // 0x40
    static UGeometryCollectionCache* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
