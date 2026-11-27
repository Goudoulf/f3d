#include "vtkF3DMeshOptimizer.h"

#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkObjectFactory.h"
#include <vtkNew.h>
#include <vtkPolyData.h>

vtkStandardNewMacro(vtkF3DMeshOptimizer);

//------------------------------------------------------------------------------
vtkF3DMeshOptimizer::vtkF3DMeshOptimizer()
{
  this->SetNumberOfInputPorts(0);
}

//------------------------------------------------------------------------------
vtkF3DMeshOptimizer::~vtkF3DMeshOptimizer() = default;

//------------------------------------------------------------------------------
int vtkF3DMeshOptimizer::RequestData(vtkInformation* vtkNotUsed(request),
  vtkInformationVector** inputVector, vtkInformationVector* outputVector)
{
  vtkPolyData* output = vtkPolyData::GetData(outputVector->GetInformationObject(0));

  vtkPolyData* input = vtkPolyData::GetData(inputVector[0]->GetInformationObject(0));

  if (!input || input->GetNumberOfPolys() == 0)
  {
    output->ShallowCopy(input);
    return 1;
  }

  // vtkNew<vtkTriangleFilter> TriangleFilter;

  return 1;
}
