#include "UAssetExportTask.hpp"
#include "UExporter.hpp"
#include "UObject.hpp"
UAssetExportTask* UAssetExportTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AssetExportTask");
    return (UAssetExportTask*)res;
}
