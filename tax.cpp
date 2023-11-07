#include"tax_reference.hpp"
#include"tax_solution.hpp"


extern "C"
void tax_reference_c(int32_t *result, int32_t *source,
			uint32_t size)
{
	//for(int i = 0; i < ITERATIONS; i++) {
		tax_reference(result, source, size);
	//}
}
FUNCTION(tax, tax_reference_c);


extern "C"
void tax_solution_c(int32_t *result, int32_t *source,
			uint32_t size)
{
	//for(int i = 0; i < ITERATIONS; i++) {
		tax_solution(result, source, size);
	//}
}
FUNCTION(tax, tax_solution_c);
