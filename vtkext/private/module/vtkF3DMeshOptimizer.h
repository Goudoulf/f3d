/**
 * @class
 * @brief
 *
 */
#ifndef vtkF3DMeshOptimizer_h
#define vtkF3DMeshOptimizer_h

#include "vtkPolyDataAlgorithm.h"
#include <vtkSetGet.h>

class vtkF3DMeshOptimizer : public vtkPolyDataAlgorithm
{
public:
  static vtkF3DMeshOptimizer* New();
  vtkTypeMacro(vtkF3DMeshOptimizer, vtkPolyDataAlgorithm);

  vtkSetMacro(OptimizeVertexCache, bool);
  vtkGetMacro(OptimizeVertexCache, bool);
  vtkBooleanMacro(OptimizeVertexCache, bool);

  vtkSetMacro(OptimizeOverdraw, bool);
  vtkGetMacro(OptimizeOverdraw, bool);
  vtkBooleanMacro(OptimizeOverdraw, bool);

  vtkSetMacro(OptimizeVertexFetch, bool);
  vtkGetMacro(OptimizeVertexFetch, bool);
  vtkBooleanMacro(OptimizeVertexFetch, bool);

protected:
  vtkF3DMeshOptimizer();
  ~vtkF3DMeshOptimizer() override;

  int RequestData(vtkInformation*, vtkInformationVector**, vtkInformationVector*) override;

private:
  vtkF3DMeshOptimizer(const vtkF3DMeshOptimizer&) = delete;
  void operator=(const vtkF3DMeshOptimizer&) = delete;

  bool OptimizeVertexCache = false;
  bool OptimizeOverdraw = false;
  bool OptimizeVertexFetch = false;
};

#endif
