#include "FUpdateNiagaraFXColorCurve.hpp"
#include "FUpdateNiagaraFXFloatCurve.hpp"
#include "UFXUpdate_NiagaraCurves.hpp"
#include "UFXUpdate_Tick.hpp"
UFXUpdate_NiagaraCurves* UFXUpdate_NiagaraCurves::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_NiagaraCurves");
    return (UFXUpdate_NiagaraCurves*)res;
}
