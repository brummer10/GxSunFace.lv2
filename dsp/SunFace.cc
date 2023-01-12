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
	double 	fConst4;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec1[2];
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
	double 	fConst16;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec2[2];
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
	double 	fConst46;
	double 	fConst47;
	double 	fVec0[2];
	double 	fConst48;
	double 	fRec5[2];
	double 	fRec4[3];
	double 	fRec3[4];
	double 	fConst49;
	double 	fRec0[2];
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec6[2];
	double 	fConst50;

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
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<3; i++) fRec4[i] = 0;
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
	fConst0 = min(1.92e+05, max(1.0, (double)fSamplingFreq));
	fConst1 = double(fConst0);
	fConst2 = (2.08289939595918e-05 * fConst1);
	fConst3 = (0.000208289939595918 + fConst2);
	fConst4 = ((0.000208289939595918 - fConst2) / fConst3);
	fConst5 = (4.74470701146341e-16 * fConst1);
	fConst6 = ((fConst1 * (0 - (7.99485042832059e-13 + fConst5))) - 1.40689297884363e-10);
	fConst7 = (4.1681797396438e-16 * fConst1);
	fConst8 = (1.40503177238752e-10 + (fConst1 * (7.87043781381876e-13 + fConst7)));
	fConst9 = (5.76527271819612e-17 * fConst1);
	fConst10 = (1.86389911974803e-11 + (fConst1 * (2.45349757303721e-14 + fConst9)));
	fConst11 = (7.05006204172503e-14 * fConst1);
	fConst12 = ((fConst1 * (0 - (1.41089040405779e-11 + fConst11))) - 7.03446489421817e-12);
	fConst13 = (7.04045025046787e-14 * fConst1);
	fConst14 = (7.02515886193761e-12 + (fConst1 * (1.40896699129443e-11 + fConst13)));
	fConst15 = (9.61179125715686e-17 * fConst1);
	fConst16 = (3.21103355309816e-10 + (fConst1 * (1.6237054533114e-12 + fConst15)));
	fConst17 = (1.40689297884363e-10 + (fConst1 * (fConst5 - 7.99485042832059e-13)));
	fConst18 = ((fConst1 * (7.87043781381876e-13 - fConst7)) - 1.40503177238752e-10);
	fConst19 = ((fConst1 * (2.45349757303721e-14 - fConst9)) - 1.86389911974803e-11);
	fConst20 = (7.03446489421817e-12 + (fConst1 * (fConst11 - 1.41089040405779e-11)));
	fConst21 = ((fConst1 * (1.40896699129443e-11 - fConst13)) - 7.02515886193761e-12);
	fConst22 = ((fConst1 * (1.6237054533114e-12 - fConst15)) - 3.21103355309816e-10);
	fConst23 = (1.42341210343902e-15 * fConst1);
	fConst24 = ((fConst1 * (7.99485042832059e-13 + fConst23)) - 1.40689297884363e-10);
	fConst25 = (1.25045392189314e-15 * fConst1);
	fConst26 = (1.40503177238752e-10 + (fConst1 * (0 - (7.87043781381876e-13 + fConst25))));
	fConst27 = (1.72958181545884e-16 * fConst1);
	fConst28 = (1.86389911974803e-11 + (fConst1 * (0 - (2.45349757303721e-14 + fConst27))));
	fConst29 = (2.11501861251751e-13 * fConst1);
	fConst30 = ((fConst1 * (1.41089040405779e-11 + fConst29)) - 7.03446489421817e-12);
	fConst31 = (2.11213507514036e-13 * fConst1);
	fConst32 = (7.02515886193761e-12 + (fConst1 * (0 - (1.40896699129443e-11 + fConst31))));
	fConst33 = (2.88353737714706e-16 * fConst1);
	fConst34 = (3.21103355309816e-10 + (fConst1 * (0 - (1.6237054533114e-12 + fConst33))));
	fConst35 = (1.40689297884363e-10 + (fConst1 * (7.99485042832059e-13 - fConst23)));
	fConst36 = ((fConst1 * (fConst25 - 7.87043781381876e-13)) - 1.40503177238752e-10);
	fConst37 = ((fConst1 * (fConst27 - 2.45349757303721e-14)) - 1.86389911974803e-11);
	fConst38 = (7.03446489421817e-12 + (fConst1 * (1.41089040405779e-11 - fConst29)));
	fConst39 = ((fConst1 * (fConst31 - 1.40896699129443e-11)) - 7.02515886193761e-12);
	fConst40 = ((fConst1 * (fConst33 - 1.6237054533114e-12)) - 3.21103355309816e-10);
	fConst41 = tan((2065.0002671311067 / fConst0));
	fConst42 = (2 * (1 - (1.0 / faustpower<2>(fConst41))));
	fConst43 = (1.0 / fConst41);
	fConst44 = (1 + ((fConst43 - 1.0000000000000004) / fConst41));
	fConst45 = (1.0 / (1 + ((1.0000000000000004 + fConst43) / fConst41)));
	fConst46 = (1 + fConst43);
	fConst47 = (0 - ((1 - fConst43) / fConst46));
	fConst48 = (1.0 / fConst46);
	fConst49 = faustpower<2>(fConst1);
	fConst50 = (fConst1 / fConst3);
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
		double fTemp0 = (3.20171405749942e-09 + ((fRec2[0] * (1.60085702874971e-10 + (fConst1 * (fConst16 + (fRec1[0] * (fConst14 + (fConst12 * fRec1[0]))))))) + (fConst1 * (fConst10 + (fRec1[0] * (fConst8 + (fConst6 * fRec1[0])))))));
		double fTemp1 = (6.45861877451926e-14 + (6.54625699782986e-16 * fRec1[0]));
		double fTemp2 = (double)input0[i];
		fVec0[0] = fTemp2;
		fRec5[0] = ((fConst48 * (fVec0[0] + fVec0[1])) + (fConst47 * fRec5[1]));
		fRec4[0] = (fRec5[0] - (fConst45 * ((fConst44 * fRec4[2]) + (fConst42 * fRec4[1]))));
		fRec3[0] = ((fConst45 * (fRec4[0] + (fRec4[2] + (2 * fRec4[1])))) - ((((fRec3[2] * (9.60514217249826e-09 + ((fRec2[0] * (4.80257108624913e-10 + (fConst1 * (fConst40 + (fRec1[0] * (fConst39 + (fConst38 * fRec1[0]))))))) + (fConst1 * (fConst37 + (fRec1[0] * (fConst36 + (fConst35 * fRec1[0])))))))) + (fRec3[1] * (9.60514217249826e-09 + ((fRec2[0] * (4.80257108624913e-10 + (fConst1 * (fConst34 + (fRec1[0] * (fConst32 + (fConst30 * fRec1[0]))))))) + (fConst1 * (fConst28 + (fRec1[0] * (fConst26 + (fConst24 * fRec1[0]))))))))) + (fRec3[3] * (3.20171405749942e-09 + ((fRec2[0] * (1.60085702874971e-10 + (fConst1 * (fConst22 + (fRec1[0] * (fConst21 + (fConst20 * fRec1[0]))))))) + (fConst1 * (fConst19 + (fRec1[0] * (fConst18 + (fConst17 * fRec1[0]))))))))) / fTemp0));
		double fTemp3 = (1.93758563235578e-13 + (1.96387709934896e-15 * fRec1[0]));
		fRec0[0] = (symclip((fConst49 * (((((fRec3[0] * (1.49762361692633e-12 + (fConst1 * (6.52408134449756e-14 + (fRec1[0] * (0 - fTemp1)))))) + (fRec3[1] * ((fConst1 * ((fRec1[0] * fTemp3) - 1.95722440334927e-13)) - 1.49762361692633e-12))) + (fRec3[2] * ((fConst1 * (1.95722440334927e-13 + (fRec1[0] * (0 - fTemp3)))) - 1.49762361692633e-12))) + (fRec3[3] * (1.49762361692633e-12 + (fConst1 * ((fRec1[0] * fTemp1) - 6.52408134449756e-14))))) / fTemp0))) - (fConst4 * fRec0[1]));
		fRec6[0] = (fSlow2 + (0.993 * fRec6[1]));
		output0[i] = (FAUSTFLOAT)(fConst50 * ((fRec0[1] * (0 - (2.08289939595918e-05 * fRec6[0]))) + (2.08289939595918e-05 * (fRec6[0] * fRec0[0]))));
		// post processing
		fRec6[1] = fRec6[0];
		fRec0[1] = fRec0[0];
		for (int i=3; i>0; i--) fRec3[i] = fRec3[i-1];
		fRec4[2] = fRec4[1]; fRec4[1] = fRec4[0];
		fRec5[1] = fRec5[0];
		fVec0[1] = fVec0[0];
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
	case INPUT_: 
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
