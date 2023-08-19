#include "FVector.hpp"
#include "UExecuteTask.hpp"
#include "USetScale_ExecuteTask.hpp"
USetScale_ExecuteTask* USetScale_ExecuteTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SetScale_ExecuteTask");
    return (USetScale_ExecuteTask*)res;
}
