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
	0.0,5.06810877255e-10,0.0121212126012,0.0242424246796,0.0363636367325,0.0484848487449,
	0.0606060606928,0.0727272725376,0.0848484842183,0.0969696956373,0.109090906639,
	0.121212116977,0.133333326254,0.145454533843,0.15757573874,0.169696939346,
	0.181818133114,0.193939315981,0.206060481473,0.218181619272,0.230302712931,
	0.242423736237,0.254544647416,0.266665379893,0.278785827588,0.290905821502,
	0.303025092481,0.315143212058,0.327259498688,0.339372869555,0.351481607639,
	0.363582998542,0.375672771815,0.387744259924,0.399787176293,0.411785942445,
	0.423717625198,0.435549864892,0.447239702149,0.458734609573,0.46997623697,
	0.480903666116,0.491444713202,0.501470068816,0.510685170714,0.518585125091,
	0.524826468469,0.529597955614,0.533326510378,0.536359191479,0.53891857456,
	0.541142231763,0.543117338965,0.544901402385,0.546533930276,0.548043084674,
	0.549449597351,0.550769161452,0.5520139454,0.553193583196,0.554315841712,
	0.555387082476,0.556412588916,0.557396803276,0.558343501447,0.559255924231,
	0.560136877786,0.560988809647,0.561813871615,0.562613966317,0.563390786172,
	0.564145844605,0.564880501542,0.565595984423,0.566293405645,0.566973777154,
	0.567638022735,0.568286988421,0.568921451377,0.569542127503,0.570149677997,
	0.570744715024,0.571327806661,0.571899481202,0.572460230948,0.57301051553,
	0.573550764855,0.574081381714,0.574602744099,0.575115207277,0.57561910564,
	0.576114754367,0.576602450918,0.577082476383,0.577555096702,0.578020563768,
	0.578479116431,0.578930981407,0.579376374115,0.579815499436
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
	double 	fRec3[4];
	double 	fConst40;
	double 	fRec0[2];
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec4[2];
	double 	fConst41;

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
	for (int i=0; i<4; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
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
	fConst4 = (4.74470701146341e-16 * fConst0);
	fConst5 = ((fConst0 * (0 - (7.99485042832059e-13 + fConst4))) - 1.40689297884363e-10);
	fConst6 = (4.1681797396438e-16 * fConst0);
	fConst7 = (1.40503177238752e-10 + (fConst0 * (7.87043781381876e-13 + fConst6)));
	fConst8 = (5.76527271819612e-17 * fConst0);
	fConst9 = (1.86389911974803e-11 + (fConst0 * (2.45349757303721e-14 + fConst8)));
	fConst10 = (7.05006204172503e-14 * fConst0);
	fConst11 = ((fConst0 * (0 - (1.41089040405779e-11 + fConst10))) - 7.03446489421817e-12);
	fConst12 = (7.04045025046787e-14 * fConst0);
	fConst13 = (7.02515886193761e-12 + (fConst0 * (1.40896699129443e-11 + fConst12)));
	fConst14 = (9.61179125715686e-17 * fConst0);
	fConst15 = (3.21103355309816e-10 + (fConst0 * (1.6237054533114e-12 + fConst14)));
	fConst16 = (1.40689297884363e-10 + (fConst0 * (fConst4 - 7.99485042832059e-13)));
	fConst17 = ((fConst0 * (7.87043781381876e-13 - fConst6)) - 1.40503177238752e-10);
	fConst18 = ((fConst0 * (2.45349757303721e-14 - fConst8)) - 1.86389911974803e-11);
	fConst19 = (7.03446489421817e-12 + (fConst0 * (fConst10 - 1.41089040405779e-11)));
	fConst20 = ((fConst0 * (1.40896699129443e-11 - fConst12)) - 7.02515886193761e-12);
	fConst21 = ((fConst0 * (1.6237054533114e-12 - fConst14)) - 3.21103355309816e-10);
	fConst22 = (1.42341210343902e-15 * fConst0);
	fConst23 = ((fConst0 * (7.99485042832059e-13 + fConst22)) - 1.40689297884363e-10);
	fConst24 = (1.25045392189314e-15 * fConst0);
	fConst25 = (1.40503177238752e-10 + (fConst0 * (0 - (7.87043781381876e-13 + fConst24))));
	fConst26 = (1.72958181545884e-16 * fConst0);
	fConst27 = (1.86389911974803e-11 + (fConst0 * (0 - (2.45349757303721e-14 + fConst26))));
	fConst28 = (2.11501861251751e-13 * fConst0);
	fConst29 = ((fConst0 * (1.41089040405779e-11 + fConst28)) - 7.03446489421817e-12);
	fConst30 = (2.11213507514036e-13 * fConst0);
	fConst31 = (7.02515886193761e-12 + (fConst0 * (0 - (1.40896699129443e-11 + fConst30))));
	fConst32 = (2.88353737714706e-16 * fConst0);
	fConst33 = (3.21103355309816e-10 + (fConst0 * (0 - (1.6237054533114e-12 + fConst32))));
	fConst34 = (1.40689297884363e-10 + (fConst0 * (7.99485042832059e-13 - fConst22)));
	fConst35 = ((fConst0 * (fConst24 - 7.87043781381876e-13)) - 1.40503177238752e-10);
	fConst36 = ((fConst0 * (fConst26 - 2.45349757303721e-14)) - 1.86389911974803e-11);
	fConst37 = (7.03446489421817e-12 + (fConst0 * (1.41089040405779e-11 - fConst28)));
	fConst38 = ((fConst0 * (fConst30 - 1.40896699129443e-11)) - 7.02515886193761e-12);
	fConst39 = ((fConst0 * (fConst32 - 1.6237054533114e-12)) - 3.21103355309816e-10);
	fConst40 = faustpower<2>(fConst0);
	fConst41 = (fConst0 / fConst2);
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
	double 	fSlow1 = (0.0010956234992476606 * (exp((2 * (1 - double(fslider1)))) - 1));
	double 	fSlow2 = (0.007000000000000006 * double(fslider2));
	for (int i=0; i<count; i++) {
		fRec1[0] = (fSlow0 + (0.993 * fRec1[1]));
		fRec2[0] = (fSlow1 + (0.993 * fRec2[1]));
		double fTemp0 = (3.20171405749942e-09 + ((fRec2[0] * (1.60085702874971e-10 + (fConst0 * (fConst15 + (fRec1[0] * (fConst13 + (fConst11 * fRec1[0]))))))) + (fConst0 * (fConst9 + (fRec1[0] * (fConst7 + (fConst5 * fRec1[0])))))));
		double fTemp1 = (6.45861877451926e-14 + (6.54625699782986e-16 * fRec1[0]));
		fRec3[0] = ((double)input0[i] - ((((fRec3[2] * (9.60514217249826e-09 + ((fRec2[0] * (4.80257108624913e-10 + (fConst0 * (fConst39 + (fRec1[0] * (fConst38 + (fConst37 * fRec1[0]))))))) + (fConst0 * (fConst36 + (fRec1[0] * (fConst35 + (fConst34 * fRec1[0])))))))) + (fRec3[1] * (9.60514217249826e-09 + ((fRec2[0] * (4.80257108624913e-10 + (fConst0 * (fConst33 + (fRec1[0] * (fConst31 + (fConst29 * fRec1[0]))))))) + (fConst0 * (fConst27 + (fRec1[0] * (fConst25 + (fConst23 * fRec1[0]))))))))) + (fRec3[3] * (3.20171405749942e-09 + ((fRec2[0] * (1.60085702874971e-10 + (fConst0 * (fConst21 + (fRec1[0] * (fConst20 + (fConst19 * fRec1[0]))))))) + (fConst0 * (fConst18 + (fRec1[0] * (fConst17 + (fConst16 * fRec1[0]))))))))) / fTemp0));
		double fTemp2 = (1.93758563235578e-13 + (1.96387709934896e-15 * fRec1[0]));
		fRec0[0] = (symclip((fConst40 * (((((fRec3[0] * (1.49762361692633e-12 + (fConst0 * (6.52408134449756e-14 + (fRec1[0] * (0 - fTemp1)))))) + (fRec3[1] * ((fConst0 * ((fRec1[0] * fTemp2) - 1.95722440334927e-13)) - 1.49762361692633e-12))) + (fRec3[2] * ((fConst0 * (1.95722440334927e-13 + (fRec1[0] * (0 - fTemp2)))) - 1.49762361692633e-12))) + (fRec3[3] * (1.49762361692633e-12 + (fConst0 * ((fRec1[0] * fTemp1) - 6.52408134449756e-14))))) / fTemp0))) - (fConst3 * fRec0[1]));
		fRec4[0] = (fSlow2 + (0.993 * fRec4[1]));
		output0[i] = (FAUSTFLOAT)(fConst41 * ((fRec0[1] * (0 - (2.08289939595918e-05 * fRec4[0]))) + (2.08289939595918e-05 * (fRec4[0] * fRec0[0]))));
		// post processing
		fRec4[1] = fRec4[0];
		fRec0[1] = fRec0[0];
		for (int i=3; i>0; i--) fRec3[i] = fRec3[i-1];
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
