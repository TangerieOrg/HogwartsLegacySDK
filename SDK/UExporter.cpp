#include "UAssetExportTask.hpp"
#include "UClass.hpp"
#include "UExporter.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UExporter* UExporter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Exporter");
    return (UExporter*)res;
}
bool UExporter::ScriptRunAssetExportTask(UAssetExportTask* Task) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Exporter.ScriptRunAssetExportTask"));
    struct Params_ScriptRunAssetExportTask {
        UAssetExportTask* Task; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ScriptRunAssetExportTask params{};
    params.Task = (UAssetExportTask*)Task;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UExporter::RunAssetExportTask(UAssetExportTask* Task) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Exporter.RunAssetExportTask"));
    struct Params_RunAssetExportTask {
        UAssetExportTask* Task; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RunAssetExportTask params{};
    params.Task = (UAssetExportTask*)Task;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UExporter::RunAssetExportTasks(TArray<UAssetExportTask*>& ExportTasks) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Exporter.RunAssetExportTasks"));
    struct Params_RunAssetExportTasks {
        TArray<UAssetExportTask*> ExportTasks; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_RunAssetExportTasks params{};
    params.ExportTasks = (TArray<UAssetExportTask*>)ExportTasks;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ExportTasks = params.ExportTasks;
    return (bool)params.ReturnValue;
}
