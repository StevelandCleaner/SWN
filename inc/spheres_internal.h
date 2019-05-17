
#ifdef SKIP_FACTORY_SPHERES_IN_HEXFILE

	const void *wavetable_list[] = {0};

#else

	// #include "spheres/hp_909_8bit.h"
	#include "spheres/hp_909hits_01.h"
	// #include "spheres/hp_909hits_02_broken.h"
	#include "spheres/hp_Distorted_FM.h"
	#include "spheres/hp_Morphing_Cello.h"
	#include "spheres/hp_TalkativeFM.h"
	#include "spheres/computed_formants.h"
	#include "spheres/hp_wavetable_formants_applespeech_1.h"
	// #include "spheres/wavetable_Jero_Spirals_JQ.h"
	#include "spheres/wavetable_SWN_D.h"
	#include "spheres/wavetable_SWN_wf_rm_hs.h"
	#include "spheres/wavetable_Sine_Seq_JQ.h"
	// #include "spheres/wavetable_geometric_JQ.h"
	// #include "spheres/wavetable_jero_JQ.h"
	#include "spheres/wavetable_pailo_sine_square.h"
	#include "spheres/wavetable_pailo_smoothrough.h"
	#include "spheres/wavetable_ring_mod_JQ.h"
	// #include "spheres/wavetable_TESTER.h"

	// determine licensing before using:
	// #include "spheres/wavetable_st_def_1.h"
	// #include "spheres/wavetable_st_def_2.h"

	const void *wavetable_list[] = {
		// (void *)wavetable_st_def_1,
		// (void *)wavetable_st_def_2, 
		// (void *)wavetable_TESTER, 
		// (void *)hp_909hits_02_broken, //too similar to 01
		// (void *)hp_909_8bit, 			//too similar to 01

		(void *)wavetable_SWN_D,
		(void *)wavetable_pailo_sine_square, 
		(void *)computed_formants, //Generated by formant_library_calc
		(void *)hp_wavetable_formants_applespeech_1,  //Source?
		(void *)hp_Morphing_Cello,  //not so interesting, though different
		(void *)hp_TalkativeFM, 	//ok...
		(void *)hp_Distorted_FM, 	//Peaked
		(void *)hp_909hits_01, 
		(void *)wavetable_SWN_wf_rm_hs, 
		(void *)wavetable_pailo_smoothrough, 
		// (void *)wavetable_jero_JQ, 
		(void *)wavetable_ring_mod_JQ, //not so interesting
		(void *)wavetable_Sine_Seq_JQ, 
		// (void *)wavetable_Jero_Spirals_JQ //no so
	};

#endif
