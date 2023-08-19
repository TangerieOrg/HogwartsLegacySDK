#include "UInterface.hpp"
#include "UVisualLoggerDebugSnapshotInterface.hpp"
UVisualLoggerDebugSnapshotInterface* UVisualLoggerDebugSnapshotInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.VisualLoggerDebugSnapshotInterface");
    return (UVisualLoggerDebugSnapshotInterface*)res;
}
