#pragma once

namespace training
{
template<typename InputIt, typename UnaryPredicate>
InputIt find_if(InputIt begin, InputIt end, UnaryPredicate pred){
	//while(begin!=end && !pred(*begin)) ++begin;
	for(;begin!=end;++begin)
	{
	   if (pred(*begin)) 
	   {
	   return begin;
	   }
	}
	return begin;
}
}

