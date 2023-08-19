#include "UCloudStorageBase.hpp"
#include "UPlatformInterfaceBase.hpp"
UCloudStorageBase* UCloudStorageBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CloudStorageBase");
    return (UCloudStorageBase*)res;
}
