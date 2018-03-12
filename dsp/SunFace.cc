// generated from file './/SunFace.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)


namespace SunFace {

struct table1d { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct table1d_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator table1d&() const { return *(table1d*)this; }
};

static table1d_imp<100> clip __rt_data = {
	0.0,0.691898968663,101.97,100, {
	0.0,5.07499999726e-09,0.0101010151693,0.0202020252603,0.0303030353467,0.0404040454261,
	0.0505050554952,0.0606060655492,0.0707070755809,0.0808080855796,0.0909090955298,
	0.101010105408,0.111111115181,0.121212124799,0.131313134186,0.141414143235,
	0.151515151785,0.161616159598,0.171717166324,0.181818171448,0.19191917421,
	0.202020173487,0.212121167625,0.222222154186,0.23232312957,0.242424088473,
	0.252525023071,0.262625921828,0.272726767734,0.28282753571,0.292928188788,
	0.30302867248,0.313128906506,0.323228772632,0.333328096843,0.343426623266,
	0.353523976201,0.363619605131,0.373712705836,0.383802108684,0.393886123633,
	0.403962331699,0.414027317696,0.424076353962,0.434103076453,0.444099247346,
	0.454054762955,0.463958101886,0.473797342808,0.483561660789,0.493242908872,
	0.502836733588,0.512342843559,0.521764451308,0.53110723472,0.540378227268,
	0.549584906934,0.558734575669,0.567834003915,0.576889269602,0.585905720545,
	0.594888005692,0.603840138397,0.612765565085,0.621667195781,0.63054718914,
	0.639405191025,0.648226614917,0.656909552746,0.66492912185,0.671064617411,
	0.675001890429,0.67756630583,0.679386982334,0.680777525163,0.681896580551,
	0.68283150802,0.683634436838,0.684338591363,0.684966296319,0.685533206554,
	0.686050689709,0.686527242789,0.686969373533,0.687382170423,0.687769683699,
	0.688135187457,0.688481364489,0.688810439528,0.689124277177,0.689424455144,
	0.689712319855,0.689989029278,0.69025558633,0.690512865219,0.690761632452,
	0.691002563736,0.691236257708,0.691463247173,0.691684008367
	}
};

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec1[2];
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec2[2];
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fRec4[3];
	double 	fRec5[2];
	double 	fConst46;
	double 	fRec3[4];
	double 	fRec0[2];
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec6[2];
	double 	fConst47;

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static double symclip(double x);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "SunFace";
	name = N_("SunFace");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<3; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<4; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (2.08289939595918e-05 * fConst0);
	fConst2 = (0.000208289939595918 + fConst1);
	fConst3 = ((0.000208289939595918 - fConst1) / fConst2);
	fConst4 = (5.17900269200436e-15 * fConst0);
	fConst5 = ((fConst0 * (0 - (1.51939711836333e-12 + fConst4))) - 9.69258256299897e-11);
	fConst6 = (5.08555835655247e-15 * fConst0);
	fConst7 = (9.64959107867252e-11 + (fConst0 * (1.49858970499725e-12 + fConst6)));
	fConst8 = (3.57066686824694e-16 * fConst0);
	fConst9 = (4.03023503153229e-11 + (fConst0 * (2.17645981485646e-13 + fConst8)));
	fConst10 = (4.88129732256873e-14 * fConst0);
	fConst11 = ((fConst0 * (0 - (9.76855241891714e-12 + fConst10))) - 4.84629128149949e-12);
	fConst12 = (4.85929394673298e-14 * fConst0);
	fConst13 = (4.82479553933626e-12 + (fConst0 * (9.72452056392239e-12 + fConst12)));
	fConst14 = (2.67168410755976e-15 * fConst0);
	fConst15 = (2.23278164045889e-10 + (fConst0 * (1.649047591055e-12 + fConst14)));
	fConst16 = (9.69258256299897e-11 + (fConst0 * (fConst4 - 1.51939711836333e-12)));
	fConst17 = ((fConst0 * (1.49858970499725e-12 - fConst6)) - 9.64959107867252e-11);
	fConst18 = ((fConst0 * (2.17645981485646e-13 - fConst8)) - 4.03023503153229e-11);
	fConst19 = (4.84629128149949e-12 + (fConst0 * (fConst10 - 9.76855241891714e-12)));
	fConst20 = ((fConst0 * (9.72452056392239e-12 - fConst12)) - 4.82479553933626e-12);
	fConst21 = ((fConst0 * (1.649047591055e-12 - fConst14)) - 2.23278164045889e-10);
	fConst22 = (1.55370080760131e-14 * fConst0);
	fConst23 = ((fConst0 * (1.51939711836333e-12 + fConst22)) - 9.69258256299897e-11);
	fConst24 = (1.52566750696574e-14 * fConst0);
	fConst25 = (9.64959107867252e-11 + (fConst0 * (0 - (1.49858970499725e-12 + fConst24))));
	fConst26 = (1.07120006047408e-15 * fConst0);
	fConst27 = (4.03023503153229e-11 + (fConst0 * (0 - (2.17645981485646e-13 + fConst26))));
	fConst28 = (1.46438919677062e-13 * fConst0);
	fConst29 = ((fConst0 * (9.76855241891714e-12 + fConst28)) - 4.84629128149949e-12);
	fConst30 = (1.45778818401989e-13 * fConst0);
	fConst31 = (4.82479553933626e-12 + (fConst0 * (0 - (9.72452056392239e-12 + fConst30))));
	fConst32 = (8.01505232267928e-15 * fConst0);
	fConst33 = (2.23278164045889e-10 + (fConst0 * (0 - (1.649047591055e-12 + fConst32))));
	fConst34 = (9.69258256299897e-11 + (fConst0 * (1.51939711836333e-12 - fConst22)));
	fConst35 = ((fConst0 * (fConst24 - 1.49858970499725e-12)) - 9.64959107867252e-11);
	fConst36 = ((fConst0 * (fConst26 - 2.17645981485646e-13)) - 4.03023503153229e-11);
	fConst37 = (4.84629128149949e-12 + (fConst0 * (9.76855241891714e-12 - fConst28)));
	fConst38 = ((fConst0 * (fConst30 - 9.72452056392239e-12)) - 4.82479553933626e-12);
	fConst39 = ((fConst0 * (fConst32 - 1.649047591055e-12)) - 2.23278164045889e-10);
	fConst40 = (4.33054407650898e-10 * fConst0);
	fConst41 = (1.22474303201741e-06 + (fConst0 * (fConst40 - 4.66962506103765e-08)));
	fConst42 = faustpower<2>(fConst0);
	fConst43 = (2.44948606403482e-06 - (8.66108815301797e-10 * fConst42));
	fConst44 = (1.22474303201741e-06 + (fConst0 * (4.66962506103765e-08 + fConst40)));
	fConst45 = (1.0 / fConst44);
	fConst46 = (fConst42 / fConst44);
	fConst47 = (fConst0 / fConst2);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

double always_inline Dsp::symclip(double x) {
    double f = fabs(x);
    f = f * clip.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = clip.data[0];
    } else if (i >= clip.size-1) {
        f = clip.data[clip.size-1];
    } else {
	f -= i;
	f = clip.data[i]*(1-f) + clip.data[i+1]*f;
    }
    return copysign(f, x);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
	double 	fSlow0 = (0.00036676987543879196 * (exp((3 * (1 - double(fslider0)))) - 1));
	double 	fSlow1 = double(fslider1);
	double 	fSlow2 = (0.0010956234992476606 * (exp((2 * (1 - fSlow1))) - 1));
	double 	fSlow3 = (0.007000000000000006 * fSlow1);
	double 	fSlow4 = (0.007000000000000006 * double(fslider2));
	for (int i=0; i<count; i++) {
		fRec1[0] = (fSlow0 + (0.993 * fRec1[1]));
		fRec2[0] = (fSlow2 + (0.993 * fRec2[1]));
		double fTemp0 = (2.21263046530123e-09 + ((fRec2[0] * (1.10631523265062e-10 + (fConst0 * (fConst15 + (fRec1[0] * (fConst13 + (fConst11 * fRec1[0]))))))) + (fConst0 * (fConst9 + (fRec1[0] * (fConst7 + (fConst5 * fRec1[0])))))));
		double fTemp1 = (4.39526454900945e-14 + (4.45487610525796e-16 * fRec1[0]));
		fRec4[0] = ((double)input0[i] - (fConst45 * ((fConst43 * fRec4[1]) + (fConst41 * fRec4[2]))));
		fRec5[0] = (fSlow3 + (0.993 * fRec5[1]));
		fRec3[0] = ((fConst46 * ((fRec4[1] * (1.7360691278528e-10 + (1.7360691278528e-08 * fRec5[0]))) + ((0 - (8.68034563926398e-11 + (8.68034563926398e-09 * fRec5[0]))) * (fRec4[2] + fRec4[0])))) - ((((fRec3[2] * (6.6378913959037e-09 + ((fRec2[0] * (3.31894569795185e-10 + (fConst0 * (fConst39 + (fRec1[0] * (fConst38 + (fConst37 * fRec1[0]))))))) + (fConst0 * (fConst36 + (fRec1[0] * (fConst35 + (fConst34 * fRec1[0])))))))) + (fRec3[1] * (6.6378913959037e-09 + ((fRec2[0] * (3.31894569795185e-10 + (fConst0 * (fConst33 + (fRec1[0] * (fConst31 + (fConst29 * fRec1[0]))))))) + (fConst0 * (fConst27 + (fRec1[0] * (fConst25 + (fConst23 * fRec1[0]))))))))) + (fRec3[3] * (2.21263046530123e-09 + ((fRec2[0] * (1.10631523265062e-10 + (fConst0 * (fConst21 + (fRec1[0] * (fConst20 + (fConst19 * fRec1[0]))))))) + (fConst0 * (fConst18 + (fRec1[0] * (fConst17 + (fConst16 * fRec1[0]))))))))) / fTemp0));
		double fTemp2 = (1.31857936470283e-13 + (1.33646283157739e-15 * fRec1[0]));
		fRec0[0] = (symclip((fConst42 * (((((fRec3[0] * (1.01917319798059e-12 + (fConst0 * (4.66403141361776e-14 + (fRec1[0] * (0 - fTemp1)))))) + (fRec3[1] * ((fConst0 * ((fRec1[0] * fTemp2) - 1.39920942408533e-13)) - 1.01917319798059e-12))) + (fRec3[2] * ((fConst0 * (1.39920942408533e-13 + (fRec1[0] * (0 - fTemp2)))) - 1.01917319798059e-12))) + (fRec3[3] * (1.01917319798059e-12 + (fConst0 * ((fRec1[0] * fTemp1) - 4.66403141361776e-14))))) / fTemp0))) - (fConst3 * fRec0[1]));
		fRec6[0] = (fSlow4 + (0.993 * fRec6[1]));
		output0[i] = (FAUSTFLOAT)(fConst47 * ((fRec0[1] * (0 - (2.08289939595918e-05 * fRec6[0]))) + (2.08289939595918e-05 * (fRec6[0] * fRec0[0]))));
		// post processing
		fRec6[1] = fRec6[0];
		fRec0[1] = fRec0[0];
		for (int i=3; i>0; i--) fRec3[i] = fRec3[i-1];
		fRec5[1] = fRec5[0];
		fRec4[2] = fRec4[1]; fRec4[1] = fRec4[0];
		fRec2[1] = fRec2[0];
		fRec1[1] = fRec1[0];
	}
#undef fslider0
#undef fslider1
#undef fslider2
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case DRIVE: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case INPUT: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fslider2_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   DRIVE, 
   INPUT, 
   VOLUME, 
} PortIndex;
*/

} // end namespace SunFace
