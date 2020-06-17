#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 147 "/usr/lib/gcc/avr/4.9.4/include/stddef.h" 3
typedef int ptrdiff_t;
#line 212
typedef unsigned int size_t;
#line 324
typedef int wchar_t;
# 8 "/home/jharbin/nesc-install/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 125 "/usr/lib/gcc/avr/4.9.4/../../../../avr/include/stdint.h" 3
typedef signed int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef signed int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef signed int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef signed int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 146
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 163
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 217
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 277
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/lib/gcc/avr/4.9.4/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 281 "/home/jharbin/nesc-install/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;
#line 310
static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 340
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 372
static __inline int32_t __nesc_ntoh_int32(const void * source)  ;
#line 372
static __inline int32_t __nesc_hton_int32(void * target, int32_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 115 "/usr/lib/gcc/avr/4.9.4/../../../../avr/include/string.h" 3
__extension__ 



extern void *memcpy(void *arg_0x7fbb493b4210, const void *arg_0x7fbb493b4510, size_t arg_0x7fbb493b47d0);



extern void *memset(void *arg_0x7fbb493af2b0, int arg_0x7fbb493af530, size_t arg_0x7fbb493af7f0);
# 73 "/usr/lib/gcc/avr/4.9.4/../../../../avr/include/stdlib.h" 3
#line 70
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 76
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x7fbb49389020, const void *arg_0x7fbb49389320);
# 25 "../../tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 244 "/usr/lib/gcc/avr/4.9.4/../../../../avr/include/avr/fuse.h" 3
#line 239
typedef struct __nesc_unnamed4245 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 447 "/usr/lib/gcc/avr/4.9.4/../../../../avr/include/avr/wdt.h" 3
#line 445
static __inline 
__attribute((__always_inline__)) 
void wdt_disable(void );
# 51 "../../tos/types/TinyError.h"
enum __nesc_unnamed4246 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ETIMEOUT = 12, 
  ELAST = 12
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 90 "../../tos/chips/atm1281/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 110
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 120
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;
#line 155
#line 147
typedef struct __nesc_unnamed4248 {

  uint8_t porf : 1;
  uint8_t extrf : 1;
  uint8_t borf : 1;
  uint8_t wdrf : 1;
  uint8_t jtrf : 1;
  uint8_t resv1 : 3;
} Atm128_MCUSR_t;










#line 158
typedef struct __nesc_unnamed4249 {

  uint8_t srw00 : 1;
  uint8_t srw01 : 1;
  uint8_t srw10 : 1;
  uint8_t srw11 : 1;
  uint8_t srl : 3;
  uint8_t sre : 1;
} Atm128_XMCRA_t;







#line 169
typedef struct __nesc_unnamed4250 {

  uint8_t xmm : 3;
  uint8_t resv1 : 4;
  uint8_t xmbk : 1;
} Atm128_XMCRB_t;







typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 82 "../../tos/chips/atm1281/adc/Atm128Adc.h"
enum __nesc_unnamed4251 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_1_1 = 2, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4252 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4253 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 133
typedef struct __nesc_unnamed4254 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4255 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4256 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4258 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4259 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4260 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 189
typedef struct __nesc_unnamed4261 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adate : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;









#line 200
typedef struct __nesc_unnamed4262 {

  uint8_t adts : 3;
  uint8_t mux5 : 1;
  uint8_t resv1 : 2;
  uint8_t acme : 1;
  uint8_t resv2 : 1;
} Atm128Adcsrb_t;


typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 41 "../../tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4263 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4264 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4265 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4266 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 81 "../../tos/chips/atm1281/timer/Atm128Timer.h"
enum __nesc_unnamed4267 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};


enum __nesc_unnamed4268 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4269 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};

enum __nesc_unnamed4270 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};



enum __nesc_unnamed4271 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4272 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};


enum __nesc_unnamed4273 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 168
#line 156
typedef union __nesc_unnamed4274 {

  uint8_t flat;
  struct __nesc_unnamed4275 {
    uint8_t wgm00 : 1;
    uint8_t wgm01 : 1;
    uint8_t resv1 : 2;
    uint8_t com0b0 : 1;
    uint8_t com0b1 : 1;
    uint8_t com0a0 : 1;
    uint8_t com0a1 : 1;
  } bits;
} Atm128_TCCR0A_t;
#line 183
#line 171
typedef union __nesc_unnamed4276 {

  uint8_t flat;
  struct __nesc_unnamed4277 {
    uint8_t cs00 : 1;
    uint8_t cs01 : 1;
    uint8_t cs02 : 2;
    uint8_t wgm02 : 1;
    uint8_t resv1 : 2;
    uint8_t foc0b : 1;
    uint8_t foc0a : 1;
  } bits;
} Atm128_TCCR0B_t;
#line 195
#line 186
typedef union __nesc_unnamed4278 {

  uint8_t flat;
  struct __nesc_unnamed4279 {
    uint8_t toie0 : 1;
    uint8_t ocie0a : 1;
    uint8_t ocie0e : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIMSK0_t;
#line 207
#line 198
typedef union __nesc_unnamed4280 {

  uint8_t flat;
  struct __nesc_unnamed4281 {
    uint8_t tov0 : 1;
    uint8_t ocf0a : 1;
    uint8_t ocf0b : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIFR0_t;
#line 223
#line 210
typedef union __nesc_unnamed4282 {

  uint8_t flat;
  struct __nesc_unnamed4283 {
    uint8_t tcr2bub : 1;
    uint8_t tcr2aub : 1;
    uint8_t ocr2bub : 1;
    uint8_t ocr2aub : 1;
    uint8_t tcn2ub : 1;
    uint8_t as2 : 1;
    uint8_t exclk : 1;
    uint8_t resv1 : 1;
  } bits;
} Atm128_ASSR_t;
#line 236
#line 226
typedef union __nesc_unnamed4284 {

  uint8_t flat;
  struct __nesc_unnamed4285 {
    uint8_t wgm20 : 1;
    uint8_t wgm21 : 1;
    uint8_t resv1 : 2;
    uint8_t comb : 2;
    uint8_t coma : 2;
  } bits;
} Atm128_TCCR2A_t;
#line 249
#line 239
typedef union __nesc_unnamed4286 {

  uint8_t flat;
  struct __nesc_unnamed4287 {
    uint8_t cs : 3;
    uint8_t wgm22 : 1;
    uint8_t resv1 : 2;
    uint8_t foc2b : 1;
    uint8_t foc2a : 1;
  } bits;
} Atm128_TCCR2B_t;
#line 261
#line 252
typedef union __nesc_unnamed4288 {

  uint8_t flat;
  struct __nesc_unnamed4289 {
    uint8_t toie : 1;
    uint8_t ociea : 1;
    uint8_t ocieb : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIMSK2_t;
#line 273
#line 264
typedef union __nesc_unnamed4290 {

  uint8_t flat;
  struct __nesc_unnamed4291 {
    uint8_t tov : 1;
    uint8_t ocfa : 1;
    uint8_t ocfb : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIFR2_t;
#line 286
#line 277
typedef union __nesc_unnamed4292 {

  uint8_t flat;
  struct __nesc_unnamed4293 {
    uint8_t wgm01 : 2;
    uint8_t comc : 2;
    uint8_t comb : 2;
    uint8_t coma : 2;
  } bits;
} Atm128_TCCRA_t;
#line 299
#line 289
typedef union __nesc_unnamed4294 {

  uint8_t flat;
  struct __nesc_unnamed4295 {
    uint8_t cs : 3;
    uint8_t wgm23 : 2;
    uint8_t resv1 : 1;
    uint8_t ices : 1;
    uint8_t icnc : 1;
  } bits;
} Atm128_TCCRB_t;
#line 311
#line 302
typedef union __nesc_unnamed4296 {

  uint8_t flat;
  struct __nesc_unnamed4297 {
    uint8_t resv1 : 5;
    uint8_t focc : 1;
    uint8_t focb : 1;
    uint8_t foca : 1;
  } bits;
} Atm128_TCCRC_t;
#line 326
#line 314
typedef union __nesc_unnamed4298 {

  uint8_t flat;
  struct __nesc_unnamed4299 {
    uint8_t toie : 1;
    uint8_t ociea : 1;
    uint8_t ocieb : 1;
    uint8_t ociec : 1;
    uint8_t resv1 : 1;
    uint8_t icie : 1;
    uint8_t resv2 : 2;
  } bits;
} Atm128_TIMSK_t;
#line 341
#line 329
typedef union __nesc_unnamed4300 {

  uint8_t flat;
  struct __nesc_unnamed4301 {
    uint8_t tov : 1;
    uint8_t ocfa : 1;
    uint8_t ocfb : 1;
    uint8_t ocfc : 1;
    uint8_t resv1 : 1;
    uint8_t icf : 1;
    uint8_t resv2 : 2;
  } bits;
} Atm128_TIFR_t;
#line 353
#line 344
typedef union __nesc_unnamed4302 {

  uint8_t flat;
  struct __nesc_unnamed4303 {
    uint8_t psrsync : 1;
    uint8_t psrasy : 1;
    uint8_t resv1 : 5;
    uint8_t tsm : 1;
  } bits;
} Atm128_GTCCR_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;
typedef uint8_t Atm128_TCNT4H_t;
typedef uint8_t Atm128_TCNT4L_t;
typedef uint8_t Atm128_TCNT5H_t;
typedef uint8_t Atm128_TCNT5L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_OCR4AH_t;
typedef uint8_t Atm128_OCR4AL_t;
typedef uint8_t Atm128_OCR4BH_t;
typedef uint8_t Atm128_OCR4BL_t;
typedef uint8_t Atm128_OCR4CH_t;
typedef uint8_t Atm128_OCR4CL_t;


typedef uint8_t Atm128_OCR5AH_t;
typedef uint8_t Atm128_OCR5AL_t;
typedef uint8_t Atm128_OCR5BH_t;
typedef uint8_t Atm128_OCR5BL_t;
typedef uint8_t Atm128_OCR5CH_t;
typedef uint8_t Atm128_OCR5CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
typedef uint8_t Atm128_ICR4H_t;
typedef uint8_t Atm128_ICR4L_t;
typedef uint8_t Atm128_ICR5H_t;
typedef uint8_t Atm128_ICR5L_t;
# 85 "../../tos/platforms/iris/MicaTimer.h"
typedef struct __nesc_unnamed4304 {
} 
#line 85
T64khz;
typedef struct __nesc_unnamed4305 {
} 
#line 86
T128khz;
typedef struct __nesc_unnamed4306 {
} 
#line 87
T2mhz;
typedef struct __nesc_unnamed4307 {
} 
#line 88
T4mhz;
#line 158
typedef TMicro TOne;
typedef TMicro TThree;
typedef uint32_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;
enum __nesc_unnamed4308 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 5, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4309 {
  PLATFORM_MHZ = 8
};
# 62 "../../tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4310 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};


enum __nesc_unnamed4311 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};


enum __nesc_unnamed4312 {
  PLATFORM_BAUDRATE = 57600L
};
# 41 "TdmaMac.h"
#line 36
typedef nx_struct notify {

  nx_uint16_t rootId;
  nx_uint8_t faultActivity;
  nx_uint16_t sinkSlot;
} __attribute__((packed)) notification_t;






#line 43
typedef nx_struct dmamacData {

  nx_uint16_t nodeId;
  nx_uint16_t sequenceNo;
  nx_uint8_t rootId;
} __attribute__((packed)) dmamac_data_t;

enum __nesc_unnamed4313 {
  AM_DMAMAC_NOTIFICATION = 10, 
  AM_DMAMAC_DATA = 11
};
# 41 "../../tos/chips/rf230/RF230DriverLayer.h"
#line 38
typedef nx_struct rf230_header_t {

  nxle_uint8_t length;
} __attribute__((packed)) rf230_header_t;









#line 43
typedef struct rf230_metadata_t {

  uint8_t lqi;
  union  {

    uint8_t power;
    uint8_t rssi;
  } __attribute((packed))  ;
} __attribute((packed))  rf230_metadata_t;

enum rf230_registers_enum {

  RF230_TRX_STATUS = 0x01, 
  RF230_TRX_STATE = 0x02, 
  RF230_TRX_CTRL_0 = 0x03, 
  RF230_PHY_TX_PWR = 0x05, 
  RF230_PHY_RSSI = 0x06, 
  RF230_PHY_ED_LEVEL = 0x07, 
  RF230_PHY_CC_CCA = 0x08, 
  RF230_CCA_THRES = 0x09, 
  RF230_IRQ_MASK = 0x0E, 
  RF230_IRQ_STATUS = 0x0F, 
  RF230_VREG_CTRL = 0x10, 
  RF230_BATMON = 0x11, 
  RF230_XOSC_CTRL = 0x12, 
  RF230_PLL_CF = 0x1A, 
  RF230_PLL_DCU = 0x1B, 
  RF230_PART_NUM = 0x1C, 
  RF230_VERSION_NUM = 0x1D, 
  RF230_MAN_ID_0 = 0x1E, 
  RF230_MAN_ID_1 = 0x1F, 
  RF230_SHORT_ADDR_0 = 0x20, 
  RF230_SHORT_ADDR_1 = 0x21, 
  RF230_PAN_ID_0 = 0x22, 
  RF230_PAN_ID_1 = 0x23, 
  RF230_IEEE_ADDR_0 = 0x24, 
  RF230_IEEE_ADDR_1 = 0x25, 
  RF230_IEEE_ADDR_2 = 0x26, 
  RF230_IEEE_ADDR_3 = 0x27, 
  RF230_IEEE_ADDR_4 = 0x28, 
  RF230_IEEE_ADDR_5 = 0x29, 
  RF230_IEEE_ADDR_6 = 0x2A, 
  RF230_IEEE_ADDR_7 = 0x2B, 
  RF230_XAH_CTRL = 0x2C, 
  RF230_CSMA_SEED_0 = 0x2D, 
  RF230_CSMA_SEED_1 = 0x2E
};

enum rf230_trx_register_enums {

  RF230_CCA_DONE = 1 << 7, 
  RF230_CCA_STATUS = 1 << 6, 
  RF230_TRX_STATUS_MASK = 0x1F, 
  RF230_P_ON = 0, 
  RF230_BUSY_RX = 1, 
  RF230_BUSY_TX = 2, 
  RF230_RX_ON = 6, 
  RF230_TRX_OFF = 8, 
  RF230_PLL_ON = 9, 
  RF230_SLEEP = 15, 
  RF230_BUSY_RX_AACK = 17, 
  RF230_BUSR_TX_ARET = 18, 
  RF230_RX_AACK_ON = 22, 
  RF230_TX_ARET_ON = 25, 
  RF230_RX_ON_NOCLK = 28, 
  RF230_AACK_ON_NOCLK = 29, 
  RF230_BUSY_RX_AACK_NOCLK = 30, 
  RF230_STATE_TRANSITION_IN_PROGRESS = 31, 
  RF230_TRAC_STATUS_MASK = 0xE0, 
  RF230_TRAC_SUCCESS = 0, 
  RF230_TRAC_SUCCESS_DATA_PENDING = 1 << 5, 
  RF230_TRAC_CHANNEL_ACCESS_FAILURE = 3 << 5, 
  RF230_TRAC_NO_ACK = 5 << 5, 
  RF230_TRAC_INVALID = 7 << 5, 
  RF230_TRX_CMD_MASK = 0x1F, 
  RF230_NOP = 0, 
  RF230_TX_START = 2, 
  RF230_FORCE_TRX_OFF = 3
};

enum rf230_phy_register_enums {

  RF230_TX_AUTO_CRC_ON = 1 << 7, 
  RF230_TX_PWR_MASK = 0x0F, 
  RF230_RSSI_MASK = 0x1F, 
  RF230_CCA_REQUEST = 1 << 7, 
  RF230_CCA_MODE_0 = 0 << 5, 
  RF230_CCA_MODE_1 = 1 << 5, 
  RF230_CCA_MODE_2 = 2 << 5, 
  RF230_CCA_MODE_3 = 3 << 5, 
  RF230_CHANNEL_MASK = 0x1F, 
  RF230_CCA_CS_THRES_SHIFT = 4, 
  RF230_CCA_ED_THRES_SHIFT = 0
};

enum rf230_irq_register_enums {

  RF230_IRQ_BAT_LOW = 1 << 7, 
  RF230_IRQ_TRX_UR = 1 << 6, 
  RF230_IRQ_TRX_END = 1 << 3, 
  RF230_IRQ_RX_START = 1 << 2, 
  RF230_IRQ_PLL_UNLOCK = 1 << 1, 
  RF230_IRQ_PLL_LOCK = 1 << 0
};

enum rf230_control_register_enums {

  RF230_AVREG_EXT = 1 << 7, 
  RF230_AVDD_OK = 1 << 6, 
  RF230_DVREG_EXT = 1 << 3, 
  RF230_DVDD_OK = 1 << 2, 
  RF230_BATMON_OK = 1 << 5, 
  RF230_BATMON_VHR = 1 << 4, 
  RF230_BATMON_VTH_MASK = 0x0F, 
  RF230_XTAL_MODE_OFF = 0 << 4, 
  RF230_XTAL_MODE_EXTERNAL = 4 << 4, 
  RF230_XTAL_MODE_INTERNAL = 15 << 4
};

enum rf230_pll_register_enums {

  RF230_PLL_CF_START = 1 << 7, 
  RF230_PLL_DCU_START = 1 << 7
};

enum rf230_spi_command_enums {

  RF230_CMD_REGISTER_READ = 0x80, 
  RF230_CMD_REGISTER_WRITE = 0xC0, 
  RF230_CMD_REGISTER_MASK = 0x3F, 
  RF230_CMD_FRAME_READ = 0x20, 
  RF230_CMD_FRAME_WRITE = 0x60, 
  RF230_CMD_SRAM_READ = 0x00, 
  RF230_CMD_SRAM_WRITE = 0x40
};
# 253 "/usr/lib/gcc/avr/4.9.4/../../../../avr/include/util/crc16.h" 3
#line 252
static __inline uint16_t 
_crc_ccitt_update(uint16_t __crc, uint8_t __data);
# 42 "../../tos/platforms/iris/chips/rf230/RadioConfig.h"
enum __nesc_unnamed4314 {





  RF230_TRX_CTRL_0_VALUE = 0, 





  RF230_CCA_MODE_VALUE = RF230_CCA_MODE_3, 





  RF230_CCA_THRES_VALUE = 0xC7
};
#line 82
static __inline uint16_t RF230_CRCBYTE_COMMAND(uint16_t crc, uint8_t data);







typedef TOne TRadio;
typedef uint16_t tradio_size;
# 45 "../../tos/lib/rfxlink/layers/TinyosNetworkLayer.h"
#line 42
typedef nx_struct network_header_t {

  nxle_uint8_t network;
} __attribute__((packed)) network_header_t;
# 40 "../../tos/types/IeeeEui64.h"
enum __nesc_unnamed4315 {
#line 40
  IEEE_EUI64_LENGTH = 8
};


#line 42
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 47 "../../tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







#line 51
typedef struct __nesc_unnamed4316 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4317 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4318 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4319 {
  IEEE154_MIN_HDR_SZ = 6
};
#line 86
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3, 
  IEEE154_TYPE_MASK = 7
};

enum ieee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3, 
  IEEE154_ADDR_MASK = 3
};
# 47 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.h"
#line 40
typedef nx_struct ieee154_simple_header_t {

  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;
} __attribute__((packed)) ieee154_simple_header_t;
# 6 "../../tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4320 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4321 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 43 "../../tos/lib/rfxlink/layers/ActiveMessageLayer.h"
#line 40
typedef nx_struct activemessage_header_t {

  nx_am_id_t type;
} __attribute__((packed)) activemessage_header_t;
# 42 "../../tos/lib/rfxlink/layers/MetadataFlagsLayer.h"
#line 38
typedef struct flags_metadata_t {


  uint8_t flags;
} __attribute((packed))  flags_metadata_t;
# 41 "../../tos/lib/rfxlink/layers/TimeStampingLayer.h"
#line 38
typedef struct timestamp_metadata_t {

  uint32_t timestamp;
} __attribute((packed))  timestamp_metadata_t;
# 41 "../../tos/lib/rfxlink/layers/LowPowerListeningLayer.h"
#line 38
typedef struct lpl_metadata_t {

  uint16_t sleepint;
} __attribute((packed))  lpl_metadata_t;
# 42 "../../tos/lib/rfxlink/layers/PacketLinkLayer.h"
#line 38
typedef struct link_metadata_t {

  uint16_t maxRetries;
  uint16_t retryDelay;
} __attribute((packed))  link_metadata_t;
# 60 "../../tos/chips/rf230/RF230Radio.h"
#line 48
typedef nx_struct rf230packet_header_t {

  rf230_header_t rf230;

  ieee154_simple_header_t ieee154;

  network_header_t network;


  activemessage_header_t am;
} __attribute__((packed)) 

rf230packet_header_t;




#line 62
typedef nx_struct rf230packet_footer_t {
} __attribute__((packed)) 

rf230packet_footer_t;
#line 78
#line 67
typedef struct rf230packet_metadata_t {







  timestamp_metadata_t timestamp;
  flags_metadata_t flags;
  rf230_metadata_t rf230;
} __attribute((packed))  rf230packet_metadata_t;
# 83 "../../tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4322 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4323 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4324 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 43 "../../tos/platforms/iris/platform_message.h"
#line 40
typedef union message_header {
  rf230packet_header_t rf230;
  serial_header_t serial;
} message_header_t;



#line 45
typedef union message_footer {
  rf230packet_footer_t rf230;
} message_footer_t;



#line 49
typedef union message_metadata {
  rf230packet_metadata_t rf230;
} message_metadata_t;
# 19 "../../tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 40 "/usr/lib/gcc/avr/4.9.4/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
#line 98
typedef __gnuc_va_list va_list;
# 244 "/usr/lib/gcc/avr/4.9.4/../../../../avr/include/stdio.h" 3
struct __file {
  char *buf;
  unsigned char unget;
  uint8_t flags;
#line 263
  int size;
  int len;
  int (*put)(char arg_0x7fbb49125020, struct __file *arg_0x7fbb49125380);
  int (*get)(struct __file *arg_0x7fbb49125ad0);
  void *udata;
};








typedef struct __file FILE;
#line 407
extern struct __file *__iob[];
#line 651
extern int printf(const char *__fmt, ...);
#line 950
__extension__ 
#line 950
typedef long long fpos_t;
# 67 "../../tos/lib/printf/printf.h"
int printfflush();






#line 72
typedef nx_struct printf_msg {
  nx_uint8_t buffer[28];
} __attribute__((packed)) printf_msg_t;

enum __nesc_unnamed4325 {
  AM_PRINTF_MSG = 100
};
# 9 "MCCPackets.h"
#line 6
typedef enum __crit {
  LO = 0, 
  HI = 1
} crit;





#line 11
typedef enum _action {
  A_IDLE = 0, 
  A_TX = 1, 
  A_LISTEN = 2
} action;





#line 17
typedef struct _slot_action {
  action behaviour;
  uint8_t peer_id;
  uint8_t priority;
} slot_action;
#line 49
#line 25
typedef struct __mccpacket {

  crit crit_level;
  nx_uint8_t flow_id;
  nx_uint8_t priority;
  nx_uint8_t c;
  nx_uint8_t src;
  nx_uint8_t dst;
  nx_uint8_t hop_src;
  nx_uint8_t hop_dst;
  nx_uint8_t seq_num;

  nx_uint8_t local_retransmits;
  nx_uint16_t enqueueSlot;
  nx_uint16_t hopSendSlot;

  nx_uint8_t burst_num;


  nx_uint32_t inject_time;
  nx_uint32_t send_time;
  nx_uint8_t failed_ack_stats;

  nx_uint8_t data[3];
} mccpacket;






#line 53
typedef struct __mccrecord {
  nx_uint16_t seq_num;
  nx_uint8_t flow_id;
} mccrecord;






#line 58
typedef struct __mccsend_record {
  nx_uint16_t seq_num;
  nx_uint8_t flow_id;
  nx_uint32_t inject_time;
  nx_uint32_t send_time;
} mccsend_record;
#line 76
#line 73
typedef enum __is_mmccpacket {
  IS_MCC = 1, 
  NOT_MCC = 0
} is_mccpacket;
# 43 "../../tos/types/Leds.h"
enum __nesc_unnamed4326 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 33 "../../tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 45 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayer.h"
typedef nx_int32_t timesync_relative_t;


typedef nx_uint32_t timesync_absolute_t;









#line 50
typedef nx_struct timesync_footer_t {

  nx_am_id_t type;
  nx_union timestamp_t {

    timesync_relative_t relative;
    timesync_absolute_t absolute;
  } __attribute__((packed)) timestamp;
} __attribute__((packed)) timesync_footer_t;
# 41 "../../tos/chips/atm128/spi/Atm128Spi.h"
enum __nesc_unnamed4327 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 58
#line 49
typedef struct __nesc_unnamed4328 {
  uint8_t spie : 1;
  uint8_t spe : 1;
  uint8_t dord : 1;
  uint8_t mstr : 1;
  uint8_t cpol : 1;
  uint8_t cpha : 1;
  uint8_t spr : 2;
} 
Atm128SPIControl_s;



#line 59
typedef union __nesc_unnamed4329 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 67
typedef struct __nesc_unnamed4330 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 74
typedef union __nesc_unnamed4331 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
# 60 "../../tos/lib/ftsp/TimeSyncMsg.h"
#line 40
typedef nx_struct TimeSyncMsg {

  nx_uint16_t rootID;
  nx_uint16_t nodeID;
  nx_uint8_t seqNum;
#line 56
  nx_uint32_t globalTime;


  nx_uint32_t localTime;
} __attribute__((packed)) TimeSyncMsg;

enum __nesc_unnamed4332 {
  TIMESYNC_AM_FTSP = 0x3E, 
  TIMESYNCMSG_LEN = sizeof(TimeSyncMsg ) - sizeof(nx_uint32_t ), 
  TS_TIMER_MODE = 0, 
  TS_USER_MODE = 1
};
# 50 "../../tos/chips/atm128/crc.h"
const uint16_t __attribute((__progmem__)) crcTable[256] = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline))  ;
# 41 "../../tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 57
#line 45
typedef union __nesc_unnamed4333 {
  struct Atm128_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm128UartStatus_t;

typedef Atm128UartStatus_t Atm128_UCSR0A_t;
typedef Atm128UartStatus_t Atm128_UCSR1A_t;
#line 75
#line 63
typedef union __nesc_unnamed4334 {
  struct Atm128_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm128UartControl_t;

typedef Atm128UartControl_t Atm128_UCSR0B_t;
typedef Atm128UartControl_t Atm128_UCSR1B_t;

enum __nesc_unnamed4335 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 98
#line 88
typedef union __nesc_unnamed4336 {
  uint8_t flat;
  struct Atm128_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} Atm128UartMode_t;

typedef Atm128UartMode_t Atm128_UCSR0C_t;
typedef Atm128UartMode_t Atm128_UCSR1C_t;





enum __nesc_unnamed4337 {
  ATM128_19200_BAUD_4MHZ = 12, 
  ATM128_38400_BAUD_4MHZ = 6, 
  ATM128_57600_BAUD_4MHZ = 3, 

  ATM128_19200_BAUD_4MHZ_2X = 25, 
  ATM128_38400_BAUD_4MHZ_2X = 12, 
  ATM128_57600_BAUD_4MHZ_2X = 8, 

  ATM128_19200_BAUD_7MHZ = 23, 
  ATM128_38400_BAUD_7MHZ = 11, 
  ATM128_57600_BAUD_7MHZ = 7, 

  ATM128_19200_BAUD_7MHZ_2X = 47, 
  ATM128_38400_BAUD_7MHZ_2X = 23, 
  ATM128_57600_BAUD_7MHZ_2X = 15, 

  ATM128_19200_BAUD_8MHZ = 25, 
  ATM128_38400_BAUD_8MHZ = 12, 
  ATM128_57600_BAUD_8MHZ = 8, 

  ATM128_19200_BAUD_8MHZ_2X = 51, 
  ATM128_38400_BAUD_8MHZ_2X = 34, 
  ATM128_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t Atm128_UBRR0L_t;
typedef uint8_t Atm128_UBRR0H_t;

typedef uint8_t Atm128_UBRR1L_t;
typedef uint8_t Atm128_UBRR1H_t;

typedef uint8_t uart_parity_t;
typedef uint8_t uart_speed_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4338 {
  TOS_UART_PARITY_NONE = 0, 
  TOS_UART_PARITY_EVEN = 1, 
  TOS_UART_PARITY_ODD = 2
};

enum __nesc_unnamed4339 {
  TOS_UART_19200 = 0, 
  TOS_UART_38400 = 1, 
  TOS_UART_57600 = 2
};

enum __nesc_unnamed4340 {
  TOS_UART_OFF = 0, 
  TOS_UART_RONLY = 1, 
  TOS_UART_TONLY = 2, 
  TOS_UART_DUPLEX = 3
};
# 87 "../../tos/lib/printf/PutcharP.nc"
static int uart_putchar(char c, FILE *stream);
static FILE atm128_stdout = 
{ .put = (int (*)(char c, FILE *stream))uart_putchar, .get = (void *)0, .flags = 0x0002, .udata = 0 };
typedef TMilli TdmaMacP__GlobalTime__precision_tag;
typedef mccpacket *TdmaMacP__forwardQueue__t;
typedef TMilli TdmaMacP__FaultClearTimer__precision_tag;
typedef T32khz GenericSlotterP__Alarm__precision_tag;
typedef uint32_t GenericSlotterP__Alarm__size_type;
typedef uint16_t HplAtm1281Timer1P__CompareA__size_type;
typedef uint16_t HplAtm1281Timer1P__Capture__size_type;
typedef uint16_t HplAtm1281Timer1P__CompareB__size_type;
typedef uint16_t HplAtm1281Timer1P__CompareC__size_type;
typedef uint16_t HplAtm1281Timer1P__Timer__timer_size;
typedef uint16_t /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size;
typedef /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size;
typedef TOne /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__frequency_tag;
typedef uint16_t /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size;
typedef /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__frequency_tag /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__precision_tag;
typedef /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__size_type;
typedef /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type;
typedef /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size;
enum /*GenericSlotterC.Alarm32khz32C.Alarm16*/AlarmOne16C__1____nesc_unnamed4341 {
  AlarmOne16C__1__COMPARE_ID = 0U
};
typedef TOne /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag;
typedef uint16_t /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__precision_tag;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size;
typedef T32khz /*Counter32khz32C.Transform32*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type;
typedef TOne /*Counter32khz32C.Transform32*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type;
typedef counter_one_overflow_t /*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__from_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__size_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__to_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__size_type;
typedef T32khz /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_precision_tag;
typedef uint32_t /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type;
typedef TOne /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_precision_tag;
typedef uint16_t /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type;
typedef /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_precision_tag /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type;
typedef /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_precision_tag /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_precision_tag /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__precision_tag;
typedef /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__size_type;
typedef TRadio RF230RadioP__PacketTimeStamp__precision_tag;
typedef uint32_t RF230RadioP__PacketTimeStamp__size_type;
typedef TRadio /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__precision_tag;
typedef tradio_size /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type;
typedef uint16_t RandomMlcgC__SeedInit__parameter;
typedef TRadio /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__precision_tag;
typedef uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type;
typedef TRadio /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeRadio__precision_tag;
typedef TMilli /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeMilli__precision_tag;
typedef TMilli /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__precision_tag;
typedef uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__size_type;
enum HilTimerMilliC____nesc_unnamed4342 {
  HilTimerMilliC__TIMER_COUNT = 6U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__timer_size;
typedef uint8_t HplAtm1281Timer2AsyncP__Compare__size_type;
typedef uint8_t HplAtm1281Timer2AsyncP__Timer__timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
typedef TMicro RF230DriverLayerP__BusyWait__precision_tag;
typedef uint16_t RF230DriverLayerP__BusyWait__size_type;
typedef uint8_t RF230DriverLayerP__PacketRSSI__value_type;
typedef TRadio RF230DriverLayerP__PacketTimeStamp__precision_tag;
typedef uint32_t RF230DriverLayerP__PacketTimeStamp__size_type;
typedef TRadio RF230DriverLayerP__LocalTime__precision_tag;
typedef uint8_t RF230DriverLayerP__PacketTransmitPower__value_type;
typedef uint8_t RF230DriverLayerP__PacketTimeSyncOffset__value_type;
typedef uint8_t RF230DriverLayerP__PacketLinkQuality__value_type;
typedef uint16_t HplRF230P__Capture__size_type;
typedef TOne /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__frequency_tag;
typedef uint16_t /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__timer_size;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__frequency_tag /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__precision_tag;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__size_type;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__size_type;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__timer_size;
enum /*HplRF230C.AlarmC*/AlarmOne16C__0____nesc_unnamed4343 {
  AlarmOne16C__0__COMPARE_ID = 1U
};
typedef TMicro /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__to_precision_tag;
typedef uint32_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__to_size_type;
typedef TMicro /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__from_precision_tag;
typedef uint16_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__from_size_type;
typedef uint32_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__upper_count_type;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__from_precision_tag /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__precision_tag;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__from_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__size_type;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__to_precision_tag /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__Counter__precision_tag;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__Counter__size_type;
typedef TMicro /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag;
typedef /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type;
typedef TMicro BusyWaitMicroC__BusyWait__precision_tag;
typedef uint16_t BusyWaitMicroC__BusyWait__size_type;
typedef mccpacket */*TdmaMacC.PrioCritQueueC*/PrioCritQueueC__0__queue_t;
typedef /*TdmaMacC.PrioCritQueueC*/PrioCritQueueC__0__queue_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__queue_t;
typedef /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__queue_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__t;
typedef /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__queue_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__t;
typedef /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__queue_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__t;
typedef /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__queue_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__t;
typedef /*TdmaMacC.PrioCritQueueC*/PrioCritQueueC__0__queue_t /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__queue_t;
typedef /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__queue_t /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__t;
typedef /*TdmaMacC.PrioCritQueueC*/PrioCritQueueC__0__queue_t /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__queue_t;
typedef /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__queue_t /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__t;
typedef /*TdmaMacC.PrioCritQueueC*/PrioCritQueueC__0__queue_t /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__queue_t;
typedef /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__queue_t /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__t;
typedef TMilli /*TimeSyncC.TimeSyncP*/TimeSyncP__0__precision_tag;
typedef /*TimeSyncC.TimeSyncP*/TimeSyncP__0__precision_tag /*TimeSyncC.TimeSyncP*/TimeSyncP__0__GlobalTime__precision_tag;
typedef /*TimeSyncC.TimeSyncP*/TimeSyncP__0__precision_tag /*TimeSyncC.TimeSyncP*/TimeSyncP__0__LocalTime__precision_tag;
typedef /*TimeSyncC.TimeSyncP*/TimeSyncP__0__precision_tag /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Send__precision_tag;
typedef uint32_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Send__size_type;
typedef TMilli /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Timer__precision_tag;
typedef /*TimeSyncC.TimeSyncP*/TimeSyncP__0__precision_tag /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncPacket__precision_tag;
typedef uint32_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncPacket__size_type;
typedef TMilli /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncPacketMilli__precision_tag;
typedef uint32_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncPacketMilli__size_type;
typedef TMilli /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendMilli__precision_tag;
typedef uint32_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendMilli__size_type;
typedef TRadio /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendRadio__precision_tag;
typedef uint32_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendRadio__size_type;
typedef TRadio /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncPacketRadio__precision_tag;
typedef uint32_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncPacketRadio__size_type;
typedef TRadio /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__PacketTimeStampRadio__precision_tag;
typedef uint32_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__PacketTimeStampRadio__size_type;
typedef uint8_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__PacketTimeSyncOffset__value_type;
typedef TRadio /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__LocalTimeRadio__precision_tag;
typedef TMilli /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__LocalTimeMilli__precision_tag;
typedef TMilli /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__PacketTimeStampMilli__precision_tag;
typedef uint32_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__PacketTimeStampMilli__size_type;
enum AMQueueP____nesc_unnamed4344 {
  AMQueueP__NUM_CLIENTS = 1U
};
enum SerialAMQueueP____nesc_unnamed4345 {
  SerialAMQueueP__NUM_CLIENTS = 1U
};
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__size_type;
typedef uint16_t HplAtm1281Timer3P__CompareA__size_type;
typedef uint16_t HplAtm1281Timer3P__Capture__size_type;
typedef uint16_t HplAtm1281Timer3P__CompareB__size_type;
typedef uint16_t HplAtm1281Timer3P__CompareC__size_type;
typedef uint16_t HplAtm1281Timer3P__Timer__timer_size;
typedef uint16_t /*InitThreeP.InitThree*/Atm128TimerInitC__1__timer_size;
typedef /*InitThreeP.InitThree*/Atm128TimerInitC__1__timer_size /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__timer_size;
typedef TThree /*CounterThree16C.NCounter*/Atm128CounterC__1__frequency_tag;
typedef uint16_t /*CounterThree16C.NCounter*/Atm128CounterC__1__timer_size;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__1__frequency_tag /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__precision_tag;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__1__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__size_type;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__1__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__timer_size;
typedef TMicro /*CounterMicro32C.Transform32*/TransformCounterC__2__to_precision_tag;
typedef uint32_t /*CounterMicro32C.Transform32*/TransformCounterC__2__to_size_type;
typedef TThree /*CounterMicro32C.Transform32*/TransformCounterC__2__from_precision_tag;
typedef uint16_t /*CounterMicro32C.Transform32*/TransformCounterC__2__from_size_type;
typedef counter_three_overflow_t /*CounterMicro32C.Transform32*/TransformCounterC__2__upper_count_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__2__from_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__2__CounterFrom__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__2__from_size_type /*CounterMicro32C.Transform32*/TransformCounterC__2__CounterFrom__size_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__2__to_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__2__Counter__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__2__to_size_type /*CounterMicro32C.Transform32*/TransformCounterC__2__Counter__size_type;
typedef uint8_t /*PrintfC.QueueC*/QueueC__0__queue_t;
typedef /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__t;
typedef uint8_t PrintfP__Queue__t;
typedef TMilli /*MCCC.TXFlow1.TXF*/TXFlowP__0__SendTimer__precision_tag;
typedef TMilli /*MCCC.TXFlow2.TXF*/TXFlowP__1__SendTimer__precision_tag;
# 31 "../../tos/interfaces/Slotter.nc"
static void TdmaMacP__Slotter__slot(uint8_t num);
# 33 "../../tos/interfaces/FrameConfiguration.nc"
static void TdmaMacP__Frame__setFrameLength(uint8_t numSlots);
#line 32
static void TdmaMacP__Frame__setSlotLength(uint32_t slotTimeBms);
# 104 "../../tos/interfaces/SplitControl.nc"
static error_t TdmaMacP__MacPowerControl__start(void );








static void TdmaMacP__RadioPowerControl__startDone(error_t error);
#line 138
static void TdmaMacP__RadioPowerControl__stopDone(error_t error);
# 110 "../../tos/interfaces/AMSend.nc"
static void TdmaMacP__phyDataSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TdmaMacP__phyNotificationReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 75 "../../tos/interfaces/Send.nc"
static error_t TdmaMacP__MacSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 83 "../../tos/lib/timer/Timer.nc"
static void TdmaMacP__FaultClearTimer__fired(void );
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TdmaMacP__phyDataReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "../../tos/interfaces/AMSend.nc"
static void TdmaMacP__phyNotificationSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 62 "../../tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformP__PlatformInit__init(void );
# 46 "../../tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 46
static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 44
static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );

static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 60 "../../tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7fbb491f3b80);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7fbb491f3b80);
# 57 "../../tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 79 "../../tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "../../tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 61 "../../tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Off(void );










static void LedsP__Leds__led1On(void );




static void LedsP__Leds__led1Off(void );
#line 94
static void LedsP__Leds__led2Off(void );
#line 134
static void LedsP__Leds__set(uint8_t val);
#line 56
static void LedsP__Leds__led0On(void );
#line 89
static void LedsP__Leds__led2On(void );
# 60 "../../tos/interfaces/Boot.nc"
static void GenericSlotterP__Boot__booted(void );
# 78 "../../tos/lib/timer/Alarm.nc"
static void GenericSlotterP__Alarm__fired(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t GenericSlotterP__Init__init(void );
# 33 "../../tos/interfaces/FrameConfiguration.nc"
static void GenericSlotterP__FrameConfiguration__setFrameLength(uint8_t numSlots);
#line 32
static void GenericSlotterP__FrameConfiguration__setSlotLength(uint32_t slotTimeBms);


static uint8_t GenericSlotterP__FrameConfiguration__getFrameLength(void );
# 31 "../../tos/interfaces/SlotterControl.nc"
static error_t GenericSlotterP__SlotterControl__synchronize(uint8_t toSlot);
# 91 "../../tos/chips/atm1281/timer/HplAtm128TimerCtrl16.nc"
static uint8_t HplAtm1281Timer1P__TimerCtrl__getInterruptFlag(void );
#line 83
static void HplAtm1281Timer1P__TimerCtrl__setControlB(uint8_t control);
#line 80
static uint8_t HplAtm1281Timer1P__TimerCtrl__getControlB(void );
# 62 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareA__reset(void );
#line 54
static void HplAtm1281Timer1P__CompareA__set(HplAtm1281Timer1P__CompareA__size_type t);










static void HplAtm1281Timer1P__CompareA__start(void );


static void HplAtm1281Timer1P__CompareA__stop(void );
# 88 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm1281Timer1P__Capture__setEdge(bool up);
#line 47
static HplAtm1281Timer1P__Capture__size_type HplAtm1281Timer1P__Capture__get(void );
#line 64
static void HplAtm1281Timer1P__Capture__reset(void );


static void HplAtm1281Timer1P__Capture__start(void );


static void HplAtm1281Timer1P__Capture__stop(void );
# 62 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareB__reset(void );
#line 54
static void HplAtm1281Timer1P__CompareB__set(HplAtm1281Timer1P__CompareB__size_type t);










static void HplAtm1281Timer1P__CompareB__start(void );


static void HplAtm1281Timer1P__CompareB__stop(void );
#line 58
static void HplAtm1281Timer1P__CompareC__default__fired(void );
# 87 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool HplAtm1281Timer1P__Timer__test(void );
#line 61
static HplAtm1281Timer1P__Timer__timer_size HplAtm1281Timer1P__Timer__get(void );
#line 104
static void HplAtm1281Timer1P__Timer__setScale(uint8_t scale);
#line 67
static void HplAtm1281Timer1P__Timer__set(HplAtm1281Timer1P__Timer__timer_size t);










static void HplAtm1281Timer1P__Timer__start(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );
# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 103 "../../tos/lib/timer/Alarm.nc"
static void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__size_type t0, /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__size_type dt);
#line 73
static void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop(void );
# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );
# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 64 "../../tos/lib/timer/Counter.nc"
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );






static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );
# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get(void );
# 109 "../../tos/lib/timer/Alarm.nc"
static /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(void );
#line 103
static void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type t0, /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type dt);
#line 66
static void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(/*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type dt);






static void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop(void );




static void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow(void );
# 59 "../../tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__schedule(void );
#line 72
static void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__suspend(void );






static void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__resume(void );
# 46 "../../tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__NeighborhoodFlag__get(
# 43 "../../tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0x7fbb48a93b60, 
# 46 "../../tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);




static void /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__NeighborhoodFlag__set(
# 43 "../../tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0x7fbb48a93b60, 
# 51 "../../tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);
# 72 "../../tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__Neighborhood__insertNode(am_addr_t id);
# 62 "../../tos/interfaces/Init.nc"
static error_t /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__Init__init(void );
# 52 "../../tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
static am_group_t RF230RadioP__ActiveMessageConfig__group(message_t *msg);










static error_t RF230RadioP__ActiveMessageConfig__checkFrame(message_t *msg);
#line 46
static am_addr_t RF230RadioP__ActiveMessageConfig__source(message_t *msg);
#line 40
static am_addr_t RF230RadioP__ActiveMessageConfig__destination(message_t *msg);








static void RF230RadioP__ActiveMessageConfig__setSource(message_t *msg, am_addr_t addr);
#line 43
static void RF230RadioP__ActiveMessageConfig__setDestination(message_t *msg, am_addr_t addr);
#line 55
static void RF230RadioP__ActiveMessageConfig__setGroup(message_t *msg, am_group_t grp);
# 60 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static void RF230RadioP__RadioAlarm__fired(void );
# 46 "../../tos/chips/rf230/RF230DriverConfig.nc"
static uint8_t RF230RadioP__RF230DriverConfig__maxPayloadLength(void );
#line 40
static uint8_t RF230RadioP__RF230DriverConfig__headerLength(message_t *msg);
#line 52
static uint8_t RF230RadioP__RF230DriverConfig__metadataLength(message_t *msg);






static uint8_t RF230RadioP__RF230DriverConfig__headerPreloadLength(void );





static bool RF230RadioP__RF230DriverConfig__requiresRssiCca(message_t *msg);
# 86 "../../tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
static void RF230RadioP__SoftwareAckConfig__reportChannelError(void );
#line 80
static void RF230RadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack);
#line 55
static bool RF230RadioP__SoftwareAckConfig__requiresAckWait(message_t *msg);






static bool RF230RadioP__SoftwareAckConfig__isAckPacket(message_t *msg);






static bool RF230RadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack);
#line 43
static uint16_t RF230RadioP__SoftwareAckConfig__getAckTimeout(void );





static void RF230RadioP__SoftwareAckConfig__setAckRequired(message_t *msg, bool ack);
#line 75
static bool RF230RadioP__SoftwareAckConfig__requiresAckReply(message_t *msg);
# 52 "../../tos/lib/rfxlink/layers/UniqueConfig.nc"
static void RF230RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void RF230RadioP__UniqueConfig__reportChannelError(void );
#line 42
static uint8_t RF230RadioP__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t RF230RadioP__UniqueConfig__getSender(message_t *msg);
# 46 "../../tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
static uint16_t RF230RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg);
#line 40
static uint16_t RF230RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg);










static uint16_t RF230RadioP__RandomCollisionConfig__getMinimumBackoff(void );





static uint16_t RF230RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg);
# 60 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(
# 54 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x7fbb489aae10);
# 50 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(
# 54 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x7fbb489aae10, 
# 50 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
tradio_size timeout);




static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(
# 54 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x7fbb489aae10);
# 45 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static bool /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(
# 54 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x7fbb489aae10);
# 65 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static tradio_size /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(
# 54 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x7fbb489aae10);
# 78 "../../tos/lib/timer/Alarm.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void );
# 48 "../../tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void );
# 57 "../../tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 44 "../../tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg);
# 59 "../../tos/interfaces/SendNotifier.nc"
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(
# 48 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fbb48967450, 
# 59 "../../tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 78 "../../tos/interfaces/Packet.nc"
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void );
#line 94
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 51 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void );
#line 56
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 45
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg);
# 80 "../../tos/interfaces/AMSend.nc"
static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(
# 45 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fbb4896b960, 
# 80 "../../tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__getPayload(
# 45 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fbb4896b960, 
# 132 "../../tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(
# 47 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fbb48968890, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(
# 46 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fbb4896ac90, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 177 "../../tos/interfaces/AMPacket.nc"
static am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__group(
#line 173
message_t * amsg);
#line 88
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(
#line 84
message_t * amsg);
#line 68
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void );









static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 121
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(
#line 117
message_t * amsg, 



am_addr_t addr);
#line 103
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(
#line 143
message_t * amsg);
#line 162
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
#line 136
static bool /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(
#line 133
message_t * amsg);
#line 187
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(
#line 184
message_t * amsg, 


am_group_t grp);







static am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup(void );
# 55 "../../tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 50 "../../tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );




static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
# 57 "../../tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 102 "../../tos/interfaces/Resource.nc"
static void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void );
# 49 "../../tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(message_t *msg);
# 62 "../../tos/interfaces/Init.nc"
static error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 79 "../../tos/interfaces/ResourceQueue.nc"
static error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 53 "../../tos/interfaces/ResourceRequested.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(
# 52 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb488900d0);
# 61 "../../tos/interfaces/ResourceRequested.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(
# 52 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb488900d0);
# 65 "../../tos/interfaces/ResourceConfigure.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb4888f730);
# 59 "../../tos/interfaces/ResourceConfigure.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb4888f730);
# 120 "../../tos/interfaces/Resource.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb48892df0);
# 97 "../../tos/interfaces/Resource.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb48892df0);
# 88 "../../tos/interfaces/Resource.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb48892df0);
# 102 "../../tos/interfaces/Resource.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb48892df0);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
# 57 "../../tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 44 "../../tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg);
# 78 "../../tos/interfaces/Packet.nc"
static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(
#line 74
message_t * msg);
# 97 "../../tos/interfaces/Ieee154Send.nc"
static void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 57 "../../tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 44 "../../tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg);
# 51 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg);
#line 45
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg);
# 49 "../../tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg);
# 51 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void );
#line 56
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 45
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg);
# 44 "../../tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubReceive__receive(message_t *msg);
# 51 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void );
#line 56
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 45
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg);
# 131 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg);
#line 120
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg);
#line 75
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg);
#line 156
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);
#line 69
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg);
#line 125
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);
#line 88
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);
#line 151
static uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 63
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 99
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg);
#line 94
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);
#line 178
static ieee154_saddr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void );
#line 162
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg);










static ieee154_panid_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void );
#line 146
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);
#line 136
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);
#line 185
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg);
#line 105
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack);
#line 168
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg);
#line 141
static uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg);
# 57 "../../tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 54 "../../tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg);
#line 47
static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg);
# 49 "../../tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg);
# 81 "../../tos/lib/rfxlink/util/Neighborhood.nc"
static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx);
# 62 "../../tos/interfaces/Init.nc"
static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void );
# 104 "../../tos/interfaces/SplitControl.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void );
# 70 "../../tos/lib/rfxlink/util/RadioState.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void );
# 49 "../../tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void );
# 54 "../../tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg);
#line 47
static bool /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void );
#line 75
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void );
# 64 "../../tos/lib/rfxlink/util/RadioSend.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void );
#line 57
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error);
# 50 "../../tos/lib/rfxlink/util/RadioChannel.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void );
# 48 "../../tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void );
# 64 "../../tos/lib/rfxlink/util/RadioSend.nc"
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void );
#line 57
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error);
# 54 "../../tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg);
#line 47
static bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg);
# 60 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void );
# 49 "../../tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void );
# 52 "../../tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 64 "../../tos/lib/rfxlink/util/RadioSend.nc"
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready(void );
#line 57
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error);
# 54 "../../tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg);
#line 47
static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg);
# 60 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void );
# 49 "../../tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg);
# 59 "../../tos/interfaces/PacketAcknowledgements.nc"
static error_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__requestAck(
#line 53
message_t * msg);
#line 85
static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__wasAcked(
#line 80
message_t * msg);
# 51 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void );
#line 56
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 45
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg);
#line 67
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 63 "../../tos/interfaces/PacketTimeStamp.nc"
static /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__timestamp(
#line 52
message_t * msg);
#line 70
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(
#line 66
message_t * msg);
#line 49
static bool /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__isValid(
#line 38
message_t * msg);
#line 78
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(
#line 73
message_t * msg, 




/*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type value);
#line 63
static /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__size_type /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__timestamp(
#line 52
message_t * msg);
#line 49
static bool /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__isValid(
#line 38
message_t * msg);
# 109 "../../tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init(void );
# 64 "../../tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get(void );
# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired(void );
# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow(void );
# 89 "../../tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
static uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag(void );
#line 82
static void HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(uint8_t control);
#line 81
static void HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(uint8_t control);
# 62 "../../tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState(void );
# 68 "../../tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
static void HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void );
#line 86
static int HplAtm1281Timer2AsyncP__TimerAsync__compareABusy(void );
# 48 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm1281Timer2AsyncP__Compare__size_type HplAtm1281Timer2AsyncP__Compare__get(void );





static void HplAtm1281Timer2AsyncP__Compare__set(HplAtm1281Timer2AsyncP__Compare__size_type t);










static void HplAtm1281Timer2AsyncP__Compare__start(void );
# 61 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm1281Timer2AsyncP__Timer__timer_size HplAtm1281Timer2AsyncP__Timer__get(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "../../tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "../../tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fbb48418a40);
# 64 "../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fbb48418a40, 
# 64 "../../tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fbb48418a40, 
# 73 "../../tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fbb48418a40);
# 61 "../../tos/lib/timer/LocalTime.nc"
static uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__get(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 51 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void );
#line 56
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 45
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg);
#line 67
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg);
# 57 "../../tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(
# 42 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x7fbb4839c130, 
# 57 "../../tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
#line 42
static bool /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(
# 42 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x7fbb4839c130, 
# 42 "../../tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);









static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(
# 42 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x7fbb4839c130, 
# 52 "../../tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
# 53 "../../tos/lib/rfxlink/util/RadioCCA.nc"
static void RF230DriverLayerP__RadioCCA__default__done(error_t error);
# 53 "../../tos/lib/rfxlink/util/PacketField.nc"
static void RF230DriverLayerP__PacketRSSI__clear(message_t *msg);





static void RF230DriverLayerP__PacketRSSI__set(message_t *msg, RF230DriverLayerP__PacketRSSI__value_type value);
# 62 "../../tos/interfaces/Init.nc"
static error_t RF230DriverLayerP__SoftwareInit__init(void );
# 60 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static void RF230DriverLayerP__RadioAlarm__fired(void );
# 57 "../../tos/lib/rfxlink/util/RadioState.nc"
static error_t RF230DriverLayerP__RadioState__turnOn(void );
# 48 "../../tos/lib/rfxlink/util/PacketField.nc"
static RF230DriverLayerP__PacketTransmitPower__value_type RF230DriverLayerP__PacketTransmitPower__get(message_t *msg);
#line 42
static bool RF230DriverLayerP__PacketTransmitPower__isSet(message_t *msg);
# 51 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t RF230DriverLayerP__RadioPacket__payloadLength(message_t *msg);









static uint8_t RF230DriverLayerP__RadioPacket__maxPayloadLength(void );
#line 56
static void RF230DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 45
static uint8_t RF230DriverLayerP__RadioPacket__headerLength(message_t *msg);
#line 67
static uint8_t RF230DriverLayerP__RadioPacket__metadataLength(message_t *msg);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void RF230DriverLayerP__releaseSpi__runTask(void );
# 48 "../../tos/lib/rfxlink/util/PacketField.nc"
static RF230DriverLayerP__PacketTimeSyncOffset__value_type RF230DriverLayerP__PacketTimeSyncOffset__get(message_t *msg);
#line 42
static bool RF230DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg);
#line 59
static void RF230DriverLayerP__PacketTimeSyncOffset__set(message_t *msg, RF230DriverLayerP__PacketTimeSyncOffset__value_type value);
# 62 "../../tos/interfaces/Init.nc"
static error_t RF230DriverLayerP__PlatformInit__init(void );
# 102 "../../tos/interfaces/Resource.nc"
static void RF230DriverLayerP__SpiResource__granted(void );
# 59 "../../tos/lib/rfxlink/util/PacketField.nc"
static void RF230DriverLayerP__PacketLinkQuality__set(message_t *msg, RF230DriverLayerP__PacketLinkQuality__value_type value);
# 49 "../../tos/lib/rfxlink/util/RadioSend.nc"
static error_t RF230DriverLayerP__RadioSend__send(message_t *msg);
# 61 "../../tos/interfaces/GpioCapture.nc"
static void RF230DriverLayerP__IRQ__captured(uint16_t time);
# 48 "../../tos/lib/rfxlink/util/Tasklet.nc"
static void RF230DriverLayerP__Tasklet__run(void );
# 60 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplRF230P__Capture__captured(HplRF230P__Capture__size_type t);
# 62 "../../tos/interfaces/Init.nc"
static error_t HplRF230P__PlatformInit__init(void );
# 66 "../../tos/interfaces/GpioCapture.nc"
static void HplRF230P__IRQ__disable(void );
#line 53
static error_t HplRF230P__IRQ__captureRisingEdge(void );
# 65 "../../tos/interfaces/ResourceConfigure.nc"
static void Atm128SpiP__ResourceConfigure__unconfigure(
# 95 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7fbb4820ee70);
# 59 "../../tos/interfaces/ResourceConfigure.nc"
static void Atm128SpiP__ResourceConfigure__configure(
# 95 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7fbb4820ee70);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void Atm128SpiP__zeroTask__runTask(void );
# 88 "../../tos/interfaces/SpiPacket.nc"
static void Atm128SpiP__SpiPacket__default__sendDone(
#line 81
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 45 "../../tos/interfaces/SpiByte.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
# 109 "../../tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__dataReady(uint8_t data);
# 62 "../../tos/interfaces/FastSpiByte.nc"
static void Atm128SpiP__FastSpiByte__splitWrite(uint8_t data);
#line 74
static uint8_t Atm128SpiP__FastSpiByte__splitReadWrite(uint8_t data);
#line 68
static uint8_t Atm128SpiP__FastSpiByte__splitRead(void );
#line 81
static uint8_t Atm128SpiP__FastSpiByte__write(uint8_t data);
# 89 "../../tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__sleep(void );
#line 83
static void HplAtm128SpiP__SPI__initMaster(void );
#line 122
static void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 113
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 97
static uint8_t HplAtm128SpiP__SPI__read(void );
#line 141
static void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
#line 131
static void HplAtm128SpiP__SPI__setClock(uint8_t speed);




static bool HplAtm128SpiP__SPI__isInterruptPending(void );
#line 125
static void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 103
static void HplAtm128SpiP__SPI__write(uint8_t data);
#line 116
static void HplAtm128SpiP__SPI__enableSpi(bool busOn);
#line 128
static void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
# 62 "../../tos/interfaces/Init.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void );
# 79 "../../tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );








static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
# 53 "../../tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__requested(
# 52 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb488900d0);
# 61 "../../tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__immediateRequested(
# 52 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb488900d0);
# 120 "../../tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__release(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb48892df0);
# 97 "../../tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__immediateRequest(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb48892df0);
# 88 "../../tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__request(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb48892df0);
# 102 "../../tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__default__granted(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb48892df0);
# 128 "../../tos/interfaces/Resource.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__isOwner(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb48892df0);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__runTask(void );
# 109 "../../tos/lib/timer/Alarm.nc"
static /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__size_type /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__getNow(void );
#line 103
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__size_type t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__size_type dt);
#line 66
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__size_type dt);






static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__stop(void );
# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__fired(void );
# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__overflow(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void );
#line 64
static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__Counter__size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__Counter__get(void );
# 61 "../../tos/lib/timer/LocalTime.nc"
static uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 66 "../../tos/lib/timer/BusyWait.nc"
static void BusyWaitMicroC__BusyWait__wait(BusyWaitMicroC__BusyWait__size_type dt);
# 30 "PrioCritQueue.nc"
static uint8_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__size(void );
#line 82
static 
#line 80
/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__t  

/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__dequeuePrio(uint8_t prio);








static error_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__enqueue(
#line 87
/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__t  newVal, 



uint8_t prio);





static void /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__clear(void );









static uint8_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__sizeLO_Q2(void );
#line 62
static 
#line 60
/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__t  

/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__headPrio(uint8_t prio);
#line 33
static uint8_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__sizePrio(uint8_t prio);
#line 94
static void /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__clearLO(void );
#line 108
static uint8_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__sizeLO_Q3(void );
#line 53
static /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__headHI(error_t *q_status);
#line 106
static uint8_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__sizeLO_Q1(void );
#line 50
static 
#line 48
/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__t  

/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__head(error_t *q_status);
# 80 "../../tos/interfaces/Queue.nc"
static 
#line 78
/*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__t  

/*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__head(void );
#line 97
static error_t /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__enqueue(
#line 93
/*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__t  newVal);
#line 72
static uint8_t /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__maxSize(void );
#line 88
static 
#line 86
/*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__t  

/*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__dequeue(void );
#line 50
static bool /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__empty(void );
#line 65
static uint8_t /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__size(void );
#line 80
static 
#line 78
/*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__t  

/*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__head(void );
#line 97
static error_t /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__enqueue(
#line 93
/*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__t  newVal);
#line 72
static uint8_t /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__maxSize(void );
#line 88
static 
#line 86
/*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__t  

/*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__dequeue(void );
#line 50
static bool /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__empty(void );
#line 65
static uint8_t /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__size(void );
#line 80
static 
#line 78
/*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__t  

/*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__head(void );
#line 97
static error_t /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__enqueue(
#line 93
/*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__t  newVal);
#line 72
static uint8_t /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__maxSize(void );
#line 88
static 
#line 86
/*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__t  

/*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__dequeue(void );
#line 50
static bool /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__empty(void );
#line 65
static uint8_t /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__size(void );
# 60 "../../tos/interfaces/Boot.nc"
static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Boot__booted(void );
# 42 "../../tos/lib/ftsp/GlobalTime.nc"
static uint32_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__GlobalTime__getLocalTime(void );
#line 66
static error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__GlobalTime__local2Global(uint32_t *time);
# 113 "../../tos/interfaces/SplitControl.nc"
static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__RadioControl__startDone(error_t error);
#line 138
static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__RadioControl__stopDone(error_t error);
# 93 "../../tos/interfaces/TimeSyncAMSend.nc"
static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Send__sendDone(message_t *msg, error_t error);
# 62 "../../tos/interfaces/Init.nc"
static error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Init__init(void );
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*TimeSyncC.TimeSyncP*/TimeSyncP__0__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 50 "../../tos/lib/ftsp/TimeSyncMode.nc"
static error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncMode__setMode(uint8_t mode);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__sendMsg__runTask(void );
#line 75
static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__processMsg__runTask(void );
# 46 "../../tos/lib/ftsp/TimeSyncNotify.nc"
static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncNotify__default__msg_received(void );





static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncNotify__default__msg_sent(void );
# 95 "../../tos/interfaces/StdControl.nc"
static error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__StdControl__start(void );
# 83 "../../tos/lib/timer/Timer.nc"
static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Timer__fired(void );
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "../../tos/interfaces/AMSend.nc"
static void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__SubAMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 48 "../../tos/interfaces/TimeSyncPacket.nc"
static bool /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncPacketMilli__isValid(message_t *msg);









static /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncPacketMilli__size_type /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncPacketMilli__eventTime(message_t *msg);
# 78 "../../tos/interfaces/Packet.nc"
static uint8_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__Packet__payloadLength(
#line 74
message_t * msg);
# 64 "../../tos/interfaces/TimeSyncAMSend.nc"
static error_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendMilli__send(
# 47 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
am_id_t arg_0x7fbb47eb1360, 
# 64 "../../tos/interfaces/TimeSyncAMSend.nc"
am_addr_t addr, message_t *msg, uint8_t len, /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendMilli__size_type event_time);
#line 114
static void */*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendMilli__getPayload(
# 47 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
am_id_t arg_0x7fbb47eb1360, 
# 114 "../../tos/interfaces/TimeSyncAMSend.nc"
message_t *msg, uint8_t len);
#line 93
static void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendMilli__default__sendDone(
# 47 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
am_id_t arg_0x7fbb47eb1360, 
# 93 "../../tos/interfaces/TimeSyncAMSend.nc"
message_t *msg, error_t error);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__Snoop__default__receive(
# 42 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
am_id_t arg_0x7fbb47eba6d0, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 64 "../../tos/interfaces/TimeSyncAMSend.nc"
static error_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendRadio__send(
# 46 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
am_id_t arg_0x7fbb47eb7c00, 
# 64 "../../tos/interfaces/TimeSyncAMSend.nc"
am_addr_t addr, message_t *msg, uint8_t len, /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendRadio__size_type event_time);
#line 114
static void */*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendRadio__getPayload(
# 46 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
am_id_t arg_0x7fbb47eb7c00, 
# 114 "../../tos/interfaces/TimeSyncAMSend.nc"
message_t *msg, uint8_t len);
#line 93
static void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendRadio__default__sendDone(
# 46 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
am_id_t arg_0x7fbb47eb7c00, 
# 93 "../../tos/interfaces/TimeSyncAMSend.nc"
message_t *msg, error_t error);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__Receive__default__receive(
# 41 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
am_id_t arg_0x7fbb47ebd960, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 147 "../../tos/interfaces/AMPacket.nc"
static am_id_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__AMPacket__type(
#line 143
message_t * amsg);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__SubSnoop__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "../../tos/interfaces/AMSend.nc"
static error_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 100 "../../tos/interfaces/Send.nc"
static void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "../../tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(
# 48 "../../tos/system/AMQueueImplP.nc"
am_id_t arg_0x7fbb47ddbb60, 
# 103 "../../tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "../../tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
# 46 "../../tos/system/AMQueueImplP.nc"
uint8_t arg_0x7fbb47ddc940, 
# 67 "../../tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(
# 46 "../../tos/system/AMQueueImplP.nc"
uint8_t arg_0x7fbb47ddc940, 
# 122 "../../tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 100
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 46 "../../tos/system/AMQueueImplP.nc"
uint8_t arg_0x7fbb47ddc940, 
# 96 "../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );
#line 75
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
# 67 "../../tos/interfaces/Leds.nc"
static void NoLedsC__Leds__led0Toggle(void );
#line 83
static void NoLedsC__Leds__led1Toggle(void );
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



MCCP__MacReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 60 "../../tos/interfaces/Boot.nc"
static void MCCP__Boot__booted(void );
# 75 "../../tos/interfaces/Send.nc"
static error_t MCCP__FlowSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 113 "../../tos/interfaces/SplitControl.nc"
static void MCCP__MacControl__startDone(error_t error);
# 100 "../../tos/interfaces/Send.nc"
static void MCCP__MacSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 80 "../../tos/interfaces/AMSend.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "../../tos/interfaces/Send.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "../../tos/interfaces/AMSend.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(
# 48 "../../tos/system/AMQueueImplP.nc"
am_id_t arg_0x7fbb47ddbb60, 
# 103 "../../tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "../../tos/interfaces/Send.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(
# 46 "../../tos/system/AMQueueImplP.nc"
uint8_t arg_0x7fbb47ddc940, 
# 67 "../../tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(
# 46 "../../tos/system/AMQueueImplP.nc"
uint8_t arg_0x7fbb47ddc940, 
# 96 "../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask(void );
#line 75
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask(void );
# 100 "../../tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "../../tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
# 47 "../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7fbb47cbde10, 
# 80 "../../tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 78 "../../tos/interfaces/Packet.nc"
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
#line 94
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(
# 48 "../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7fbb47cb9060, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 78 "../../tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 103
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
#line 143
message_t * amsg);
#line 162
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 104 "../../tos/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void );
#line 75
static void SerialP__RunTx__runTask(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t SerialP__Init__init(void );
# 54 "../../tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void );
#line 49
static void SerialP__SerialFlush__default__flush(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void );
# 94 "../../tos/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
#line 85
static void SerialP__SerialFrameComm__delimiterReceived(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void );
# 71 "../../tos/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void );
#line 62
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 75 "../../tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 51 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fbb47b68110, 
# 67 "../../tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fbb47b68110, 
# 96 "../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 50 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fbb47b69570, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 54 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fbb47b674d0, 
# 31 "../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 54 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fbb47b674d0);
# 23 "../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 54 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fbb47b674d0, 
# 23 "../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 81 "../../tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 62 "../../tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "../../tos/interfaces/UartStream.nc"
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 56 "../../tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
#line 79
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
#line 65
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
# 62 "../../tos/interfaces/Init.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );
# 48 "../../tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 82 "../../tos/lib/timer/Counter.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "../../tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 47
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 95 "../../tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart0Init__init(void );
# 42 "../../tos/chips/atm128/HplAtm128Uart.nc"
static error_t HplAtm128UartP__HplUart0__enableRxIntr(void );
#line 40
static error_t HplAtm128UartP__HplUart0__enableTxIntr(void );
static error_t HplAtm128UartP__HplUart0__disableTxIntr(void );

static error_t HplAtm128UartP__HplUart0__disableRxIntr(void );


static void HplAtm128UartP__HplUart0__tx(uint8_t data);
# 62 "../../tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart1Init__init(void );
# 49 "../../tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__default__txDone(void );
# 95 "../../tos/interfaces/StdControl.nc"
static error_t HplAtm128UartP__Uart0RxControl__start(void );









static error_t HplAtm128UartP__Uart0RxControl__stop(void );
#line 95
static error_t HplAtm128UartP__Uart0TxControl__start(void );









static error_t HplAtm128UartP__Uart0TxControl__stop(void );
# 83 "../../tos/chips/atm1281/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm1281Timer3P__TimerCtrl__setControlB(uint8_t control);
#line 80
static uint8_t HplAtm1281Timer3P__TimerCtrl__getControlB(void );
# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer3P__CompareA__default__fired(void );
# 47 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
static HplAtm1281Timer3P__Capture__size_type HplAtm1281Timer3P__Capture__get(void );
#line 60
static void HplAtm1281Timer3P__Capture__default__captured(HplAtm1281Timer3P__Capture__size_type t);
# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer3P__CompareB__default__fired(void );
#line 58
static void HplAtm1281Timer3P__CompareC__default__fired(void );
# 104 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer3P__Timer__setScale(uint8_t scale);
#line 67
static void HplAtm1281Timer3P__Timer__set(HplAtm1281Timer3P__Timer__timer_size t);










static void HplAtm1281Timer3P__Timer__start(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t /*InitThreeP.InitThree*/Atm128TimerInitC__1__Init__init(void );
# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__overflow(void );
#line 70
static void /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__overflow(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__2__CounterFrom__overflow(void );
# 31 "../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
# 80 "../../tos/interfaces/Queue.nc"
static 
#line 78
/*PrintfC.QueueC*/QueueC__0__Queue__t  

/*PrintfC.QueueC*/QueueC__0__Queue__head(void );
#line 97
static error_t /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(
#line 93
/*PrintfC.QueueC*/QueueC__0__Queue__t  newVal);
#line 72
static uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__maxSize(void );
#line 88
static 
#line 86
/*PrintfC.QueueC*/QueueC__0__Queue__t  

/*PrintfC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*PrintfC.QueueC*/QueueC__0__Queue__empty(void );
#line 65
static uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__size(void );
# 110 "../../tos/interfaces/AMSend.nc"
static void PrintfP__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void PrintfP__retrySend__runTask(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t PrintfP__Init__init(void );
# 49 "../../tos/lib/printf/Putchar.nc"
static int PrintfP__Putchar__putchar(int c);
# 62 "../../tos/interfaces/Init.nc"
static error_t PutcharP__Init__init(void );
# 60 "../../tos/interfaces/Boot.nc"
static void SerialStartP__Boot__booted(void );
# 113 "../../tos/interfaces/SplitControl.nc"
static void SerialStartP__SerialControl__startDone(error_t error);
#line 138
static void SerialStartP__SerialControl__stopDone(error_t error);
# 83 "../../tos/lib/timer/Timer.nc"
static void /*MCCC.TXFlow1.TXF*/TXFlowP__0__SendTimer__fired(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*MCCC.TXFlow1.TXF*/TXFlowP__0__send__runTask(void );
# 60 "../../tos/interfaces/Boot.nc"
static void /*MCCC.TXFlow1.TXF*/TXFlowP__0__Boot__booted(void );
# 100 "../../tos/interfaces/Send.nc"
static void /*MCCC.TXFlow1.TXF*/TXFlowP__0__AppSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 83 "../../tos/lib/timer/Timer.nc"
static void /*MCCC.TXFlow2.TXF*/TXFlowP__1__SendTimer__fired(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*MCCC.TXFlow2.TXF*/TXFlowP__1__send__runTask(void );
# 60 "../../tos/interfaces/Boot.nc"
static void /*MCCC.TXFlow2.TXF*/TXFlowP__1__Boot__booted(void );
# 100 "../../tos/interfaces/Send.nc"
static void /*MCCC.TXFlow2.TXF*/TXFlowP__1__AppSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TdmaMacP__MacReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 113 "../../tos/interfaces/SplitControl.nc"
static void TdmaMacP__MacPowerControl__startDone(error_t error);
# 42 "../../tos/lib/ftsp/GlobalTime.nc"
static uint32_t TdmaMacP__GlobalTime__getLocalTime(void );
# 126 "../../tos/interfaces/Packet.nc"
static 
#line 123
void * 


TdmaMacP__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 30 "PrioCritQueue.nc"
static uint8_t TdmaMacP__forwardQueue__size(void );
#line 82
static 
#line 80
TdmaMacP__forwardQueue__t  

TdmaMacP__forwardQueue__dequeuePrio(uint8_t prio);








static error_t TdmaMacP__forwardQueue__enqueue(
#line 87
TdmaMacP__forwardQueue__t  newVal, 



uint8_t prio);





static void TdmaMacP__forwardQueue__clear(void );









static uint8_t TdmaMacP__forwardQueue__sizeLO_Q2(void );
#line 62
static 
#line 60
TdmaMacP__forwardQueue__t  

TdmaMacP__forwardQueue__headPrio(uint8_t prio);
#line 33
static uint8_t TdmaMacP__forwardQueue__sizePrio(uint8_t prio);
#line 94
static void TdmaMacP__forwardQueue__clearLO(void );
#line 108
static uint8_t TdmaMacP__forwardQueue__sizeLO_Q3(void );
#line 53
static TdmaMacP__forwardQueue__t TdmaMacP__forwardQueue__headHI(error_t *q_status);
#line 106
static uint8_t TdmaMacP__forwardQueue__sizeLO_Q1(void );
#line 50
static 
#line 48
TdmaMacP__forwardQueue__t  

TdmaMacP__forwardQueue__head(error_t *q_status);
# 104 "../../tos/interfaces/SplitControl.nc"
static error_t TdmaMacP__RadioPowerControl__start(void );
# 59 "../../tos/interfaces/PacketAcknowledgements.nc"
static error_t TdmaMacP__ACK__requestAck(
#line 53
message_t * msg);
#line 85
static bool TdmaMacP__ACK__wasAcked(
#line 80
message_t * msg);
# 80 "../../tos/interfaces/AMSend.nc"
static error_t TdmaMacP__phyDataSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "../../tos/interfaces/Send.nc"
static void TdmaMacP__MacSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 134 "../../tos/interfaces/Leds.nc"
static void TdmaMacP__Leds__set(uint8_t val);
# 33 "../../tos/interfaces/FrameConfiguration.nc"
static void TdmaMacP__FrameConfiguration__setFrameLength(uint8_t numSlots);
#line 32
static void TdmaMacP__FrameConfiguration__setSlotLength(uint32_t slotTimeBms);


static uint8_t TdmaMacP__FrameConfiguration__getFrameLength(void );
# 73 "../../tos/lib/timer/Timer.nc"
static void TdmaMacP__FaultClearTimer__startOneShot(uint32_t dt);
# 88 "../../tos/interfaces/AMPacket.nc"
static am_addr_t TdmaMacP__AMPacket__source(
#line 84
message_t * amsg);
# 80 "../../tos/interfaces/AMSend.nc"
static error_t TdmaMacP__phyNotificationSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 31 "../../tos/interfaces/SlotterControl.nc"
static error_t TdmaMacP__SlotterControl__synchronize(uint8_t toSlot);
# 81 "TdmaMacP.nc"
bool TdmaMacP__init;
bool TdmaMacP__requestStop;
bool TdmaMacP__radioOff;
bool TdmaMacP__phyLock;

uint8_t TdmaMacP__prevSlot;

bool TdmaMacP__activeFault = FALSE;

bool TdmaMacP__hiCritMode = FALSE;


bool TdmaMacP__tableNotSetup = TRUE;



uint8_t TdmaMacP__value;


uint8_t TdmaMacP__discarded[3];






nx_uint16_t TdmaMacP__localSlot;
#line 162
uint8_t TdmaMacP__node_ack_fails;


uint8_t TdmaMacP__max_node_ack_fails;





action TdmaMacP__mccSchedTable[10];
message_t TdmaMacP__forwardPktBuffer[20][3];

mccrecord TdmaMacP__receptionHistory[50];
mccsend_record TdmaMacP__sentHistory[50];

message_t TdmaMacP__selfDataPkt;
message_t TdmaMacP__selfNotificationPkt;


notification_t *TdmaMacP__notificationPacket;
mccpacket *TdmaMacP__dataPacket;
mccpacket *TdmaMacP__ackedDataPacket;

mccpacket TdmaMacP__nullPkt;







bool TdmaMacP__slotterInit;
uint32_t TdmaMacP__slotSize;
uint8_t TdmaMacP__currentSlot;
uint8_t TdmaMacP__superFrameLength;
#line 196
uint8_t TdmaMacP__currFrameSize;



uint16_t TdmaMacP__nbReceivedPkts[5];





am_addr_t TdmaMacP__src;

uint8_t TdmaMacP__i;




static inline void TdmaMacP__mcc_fault_triggered(uint8_t slot_timings);









static inline void TdmaMacP__check_fault_should_be_triggered(uint16_t sink_slot);









static inline bool TdmaMacP__mcc_should_receive(action *table, __nesc_nxbase_nx_uint8_t slot);





static inline void TdmaMacP__mcc_register_failed_ack(void );








static inline void TdmaMacP__mcc_clear_node_ack_fails(void );



static inline void TdmaMacP__mcc_check_to_go_high(void );
#line 273
static inline void TdmaMacP__mcc_return_to_lo_mode(void );






static inline void TdmaMacP__mcc_printf(mccpacket *pkt);




static inline action TdmaMacP__get_mcc_action(action *table, __nesc_nxbase_nx_uint8_t slot);



static inline void TdmaMacP__print_mcc_action(action a);







static inline void TdmaMacP__setup_temp_mcc_table(void );
#line 321
static inline void TdmaMacP__mcc_increase_retransmit_counter(mccpacket *mccpkt);





static inline bool TdmaMacP__mcc_check_should_dequeue_packet(mccpacket *mccpkt);
#line 348
static inline __nesc_nxbase_nx_uint8_t TdmaMacP__route_next_hop(__nesc_nxbase_nx_uint8_t dst);
#line 364
static inline void TdmaMacP__record_packet_reception(mccpacket *pkt);







static inline void TdmaMacP__record_successfully_sent_frame(mccpacket *pkt);
#line 455
static inline error_t TdmaMacP__MacPowerControl__start(void );
#line 481
static inline void TdmaMacP__RadioPowerControl__startDone(error_t error);
#line 518
static inline void TdmaMacP__RadioPowerControl__stopDone(error_t error);







static inline void TdmaMacP__handle_tx_slot(uint8_t slot);
#line 646
static inline void TdmaMacP__Slotter__slot(uint8_t slot);
#line 719
static error_t TdmaMacP__mcc_enqueue_to_buffers(mccpacket *packetToEnqueue, uint32_t injectTime);
#line 777
static inline error_t TdmaMacP__MacSend__send(message_t *msg, uint8_t len);
#line 864
static inline void TdmaMacP__phyNotificationSend__sendDone(message_t *msg, error_t error);








static inline message_t *TdmaMacP__phyNotificationReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 922
static inline void TdmaMacP__phyDataSend__sendDone(message_t *msg, error_t error);
#line 1021
static inline message_t *TdmaMacP__phyDataReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 1084
static inline void TdmaMacP__Frame__setSlotLength(uint32_t slotTimeBms);




static inline void TdmaMacP__Frame__setFrameLength(uint8_t numSlots);
#line 1104
static inline void TdmaMacP__FaultClearTimer__fired(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MeasureClock__init(void );
# 51 "../../tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 44 "../../tos/interfaces/GeneralIO.nc"
static void MotePlatformP__SerialIdPin__makeInput(void );
#line 41
static void MotePlatformP__SerialIdPin__clr(void );
# 49 "../../tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
# 55 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 61
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 61
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 59
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
# 67 "../../tos/platforms/iris/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4346 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 154
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 62 "../../tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "../../tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "../../tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "../../tos/system/RealMainP.nc"
int main(void )   ;
# 75 "../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7fbb491f3b80);
# 79 "../../tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "../../tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4347 {

  SchedulerBasicP__NUM_TASKS = 25U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 62 "../../tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 97 "../../tos/chips/atm1281/McuSleepC.nc"
const uint8_t __attribute((__progmem__)) McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 1, ((
1 << 3) | (1 << 2)) | (1 << 1), (
1 << 2) | (1 << 1), (
1 << 3) | (1 << 2), 
1 << 2 };

static inline mcu_power_t McuSleepC__getPowerState(void );
#line 145
static inline void McuSleepC__McuSleep__sleep(void );
#line 161
static inline void McuSleepC__McuPowerState__update(void );
# 46 "../../tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );




static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );
static void LedsP__Led1__clr(void );




static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
static void LedsP__Led2__clr(void );
# 56 "../../tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 74
static inline void LedsP__Leds__led0On(void );




static inline void LedsP__Leds__led0Off(void );









static inline void LedsP__Leds__led1On(void );




static inline void LedsP__Leds__led1Off(void );









static inline void LedsP__Leds__led2On(void );




static inline void LedsP__Leds__led2Off(void );
#line 136
static void LedsP__Leds__set(uint8_t val);
# 31 "../../tos/interfaces/Slotter.nc"
static void GenericSlotterP__Slotter__slot(uint8_t num);
# 109 "../../tos/lib/timer/Alarm.nc"
static GenericSlotterP__Alarm__size_type GenericSlotterP__Alarm__getNow(void );
#line 66
static void GenericSlotterP__Alarm__start(GenericSlotterP__Alarm__size_type dt);






static void GenericSlotterP__Alarm__stop(void );
# 46 "../../tos/system/GenericSlotterP.nc"
uint8_t GenericSlotterP__slot;
uint32_t GenericSlotterP__slotLength;
uint8_t GenericSlotterP__frameLength;
bool GenericSlotterP__sync;
uint32_t GenericSlotterP__nextFire;

static inline error_t GenericSlotterP__Init__init(void );








static inline void GenericSlotterP__Boot__booted(void );
#line 75
static error_t GenericSlotterP__SlotterControl__synchronize(uint8_t toSlot);







static inline void GenericSlotterP__FrameConfiguration__setSlotLength(uint32_t slotTimeBms);



static inline void GenericSlotterP__FrameConfiguration__setFrameLength(uint8_t numSlots);







static inline uint8_t GenericSlotterP__FrameConfiguration__getFrameLength(void );
#line 112
static void GenericSlotterP__Alarm__fired(void );
# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareA__fired(void );
# 60 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm1281Timer1P__Capture__captured(HplAtm1281Timer1P__Capture__size_type t);
# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareB__fired(void );
#line 58
static void HplAtm1281Timer1P__CompareC__fired(void );
# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer1P__Timer__overflow(void );
# 90 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint16_t HplAtm1281Timer1P__Timer__get(void );


static inline void HplAtm1281Timer1P__Timer__set(uint16_t t);








static inline void HplAtm1281Timer1P__Timer__setScale(uint8_t s);










static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getControlB(void );
#line 126
static inline void HplAtm1281Timer1P__TimerCtrl__setControlB(uint8_t x);
#line 145
static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getInterruptFlag(void );









static inline void HplAtm1281Timer1P__Capture__setEdge(bool up);



static inline void HplAtm1281Timer1P__Capture__reset(void );
static inline void HplAtm1281Timer1P__CompareA__reset(void );
static inline void HplAtm1281Timer1P__CompareB__reset(void );


static inline void HplAtm1281Timer1P__Timer__start(void );
static inline void HplAtm1281Timer1P__Capture__start(void );
static inline void HplAtm1281Timer1P__CompareA__start(void );
static inline void HplAtm1281Timer1P__CompareB__start(void );



static inline void HplAtm1281Timer1P__Capture__stop(void );
static inline void HplAtm1281Timer1P__CompareA__stop(void );
static inline void HplAtm1281Timer1P__CompareB__stop(void );


static inline bool HplAtm1281Timer1P__Timer__test(void );
#line 214
static inline void HplAtm1281Timer1P__CompareA__set(uint16_t t);
static inline void HplAtm1281Timer1P__CompareB__set(uint16_t t);



static inline uint16_t HplAtm1281Timer1P__Capture__get(void );






void __vector_17(void ) __attribute((interrupt))   ;



void __vector_18(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer1P__CompareC__default__fired(void );
void __vector_19(void ) __attribute((interrupt))   ;



void __vector_16(void ) __attribute((interrupt))   ;



void __vector_20(void ) __attribute((interrupt))   ;
# 104 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale);
#line 67
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t);










static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void );
# 51 "../../tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );








static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 78 "../../tos/lib/timer/Alarm.nc"
static void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__fired(void );
# 62 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void );
#line 54
static void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t);










static void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void );


static void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void );
# 61 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void );
# 74 "../../tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop(void );








static inline void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size t0, /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size dt);
#line 119
static inline void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );





static inline void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void );
# 87 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void );
#line 61
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void );
# 50 "../../tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );




static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );









static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 64 "../../tos/lib/timer/Counter.nc"
static /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get(void );






static bool /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__overflow(void );
# 67 "../../tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type /*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper;

enum /*Counter32khz32C.Transform32*/TransformCounterC__0____nesc_unnamed4348 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 5, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type ) - /*Counter32khz32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type ) + 5, 



  TransformCounterC__0__OVERFLOW_MASK = /*Counter32khz32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type )2 << (/*Counter32khz32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
# 78 "../../tos/lib/timer/Alarm.nc"
static void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__fired(void );
#line 103
static void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__startAt(/*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type t0, /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__stop(void );
# 64 "../../tos/lib/timer/Counter.nc"
static /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__size_type /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get(void );
# 77 "../../tos/lib/timer/TransformAlarmC.nc"
/*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0;
/*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt;

enum /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0____nesc_unnamed4349 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type ) - 1 - 5, 
  TransformAlarmC__0__MAX_DELAY = (/*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type )1 << /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(void );
#line 102
static inline void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop(void );




static void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm(void );
#line 147
static inline void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type t0, /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt);









static inline void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(/*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt);




static inline void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired(void );
#line 177
static inline void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow(void );
# 48 "../../tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__run(void );
# 76 "../../tos/lib/rfxlink/util/TaskletC.nc"
uint8_t /*RF230RadioC.TaskletC*/TaskletC__0__state;

static void /*RF230RadioC.TaskletC*/TaskletC__0__doit(void );
#line 98
static __inline void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__suspend(void );




static void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__resume(void );
#line 116
static void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__schedule(void );
# 81 "../../tos/lib/rfxlink/util/Neighborhood.nc"
static void /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__Neighborhood__evicted(uint8_t idx);
# 49 "../../tos/lib/rfxlink/util/NeighborhoodP.nc"
am_addr_t /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__nodes[5];
uint8_t /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__ages[5];
uint8_t /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__flags[5];
uint8_t /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__time;
uint8_t /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__last;

static inline error_t /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__Init__init(void );
#line 94
static inline uint8_t /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__Neighborhood__insertNode(am_addr_t node);
#line 158
static __inline bool /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__NeighborhoodFlag__get(uint8_t bit, uint8_t idx);




static __inline void /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__NeighborhoodFlag__set(uint8_t bit, uint8_t idx);
# 65 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static tradio_size RF230RadioP__RadioAlarm__getNow(void );
# 131 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint16_t RF230RadioP__Ieee154PacketLayer__getDestPan(message_t *msg);
#line 120
static uint8_t RF230RadioP__Ieee154PacketLayer__getDSN(message_t *msg);
#line 75
static bool RF230RadioP__Ieee154PacketLayer__isAckFrame(message_t *msg);
#line 156
static void RF230RadioP__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);
#line 69
static void RF230RadioP__Ieee154PacketLayer__createDataFrame(message_t *msg);
#line 125
static void RF230RadioP__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);
#line 88
static void RF230RadioP__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);
#line 151
static uint16_t RF230RadioP__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 63
static bool RF230RadioP__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 94
static bool RF230RadioP__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);
#line 162
static bool RF230RadioP__Ieee154PacketLayer__requiresAckWait(message_t *msg);
#line 146
static void RF230RadioP__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);
#line 136
static void RF230RadioP__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);
#line 105
static void RF230RadioP__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack);
#line 168
static bool RF230RadioP__Ieee154PacketLayer__requiresAckReply(message_t *msg);
#line 141
static uint16_t RF230RadioP__Ieee154PacketLayer__getDestAddr(message_t *msg);
# 73 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__RF230DriverConfig__headerLength(message_t *msg);




static inline uint8_t RF230RadioP__RF230DriverConfig__maxPayloadLength(void );




static inline uint8_t RF230RadioP__RF230DriverConfig__metadataLength(message_t *msg);




static inline uint8_t RF230RadioP__RF230DriverConfig__headerPreloadLength(void );





static inline bool RF230RadioP__RF230DriverConfig__requiresRssiCca(message_t *msg);






static inline bool RF230RadioP__SoftwareAckConfig__requiresAckWait(message_t *msg);




static inline bool RF230RadioP__SoftwareAckConfig__isAckPacket(message_t *msg);




static inline bool RF230RadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack);




static inline void RF230RadioP__SoftwareAckConfig__setAckRequired(message_t *msg, bool ack);




static inline bool RF230RadioP__SoftwareAckConfig__requiresAckReply(message_t *msg);




static inline void RF230RadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack);








static inline uint16_t RF230RadioP__SoftwareAckConfig__getAckTimeout(void );




static inline void RF230RadioP__SoftwareAckConfig__reportChannelError(void );








static inline uint8_t RF230RadioP__UniqueConfig__getSequenceNumber(message_t *msg);




static inline void RF230RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn);




static inline am_addr_t RF230RadioP__UniqueConfig__getSender(message_t *msg);




static inline void RF230RadioP__UniqueConfig__reportChannelError(void );








static inline am_addr_t RF230RadioP__ActiveMessageConfig__destination(message_t *msg);




static inline void RF230RadioP__ActiveMessageConfig__setDestination(message_t *msg, am_addr_t addr);




static inline am_addr_t RF230RadioP__ActiveMessageConfig__source(message_t *msg);




static inline void RF230RadioP__ActiveMessageConfig__setSource(message_t *msg, am_addr_t addr);




static inline am_group_t RF230RadioP__ActiveMessageConfig__group(message_t *msg);




static inline void RF230RadioP__ActiveMessageConfig__setGroup(message_t *msg, am_group_t grp);




static inline error_t RF230RadioP__ActiveMessageConfig__checkFrame(message_t *msg);
#line 244
static inline uint16_t RF230RadioP__RandomCollisionConfig__getMinimumBackoff(void );








static inline uint16_t RF230RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg);








static inline uint16_t RF230RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg);






static inline uint16_t RF230RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg);
#line 285
static inline void RF230RadioP__RadioAlarm__fired(void );
# 60 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(
# 54 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x7fbb489aae10);
# 109 "../../tos/lib/timer/Alarm.nc"
static /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow(void );
#line 66
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type dt);






static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__stop(void );
# 59 "../../tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule(void );
# 66 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state;
enum /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0____nesc_unnamed4350 {

  RadioAlarmP__0__STATE_READY = 0, 
  RadioAlarmP__0__STATE_WAIT = 1, 
  RadioAlarmP__0__STATE_FIRED = 2
};

uint8_t /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm;

static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void );
#line 88
static __inline tradio_size /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(uint8_t id);




static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void );








static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(uint8_t id);



static __inline bool /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(uint8_t id);




static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(uint8_t id, tradio_size timeout);








static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(uint8_t id);
# 49 "../../tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__send(message_t *msg);
# 59 "../../tos/interfaces/SendNotifier.nc"
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__aboutToSend(
# 48 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fbb48967450, 
# 59 "../../tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 110 "../../tos/interfaces/AMSend.nc"
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(
# 45 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fbb4896b960, 
# 103 "../../tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(
# 47 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fbb48968890, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 51 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength(void );
#line 56
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 45
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(message_t *msg);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(
# 46 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fbb4896ac90, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 52 "../../tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
static am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__group(message_t *msg);










static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__checkFrame(message_t *msg);
#line 46
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__source(message_t *msg);
#line 40
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(message_t *msg);








static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setSource(message_t *msg, am_addr_t addr);
#line 43
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setDestination(message_t *msg, am_addr_t addr);
#line 55
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setGroup(message_t *msg, am_group_t grp);
# 50 "../../tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress(void );




static am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amGroup(void );
# 63 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static activemessage_header_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(message_t *msg);




static inline void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(message_t *msg);






static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len);
#line 94
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
#line 113
static __inline void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__getPayload(am_id_t id, message_t *msg, uint8_t len);




static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(am_id_t id, am_addr_t addr, message_t *msg);





static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg);
#line 139
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);






static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void );




static __inline am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup(void );




static __inline bool /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(message_t *msg);






static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(message_t *msg);




static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(message_t *msg, am_addr_t addr);




static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(message_t *msg);




static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(message_t *msg, am_addr_t addr);




static __inline am_id_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(message_t *msg);




static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(message_t *msg, am_id_t type);




static __inline am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__group(message_t *msg);




static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(message_t *msg, am_group_t grp);










static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void );
#line 251
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(message_t *msg);




static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);




static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void );




static void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(message_t *msg, uint8_t len);
# 63 "../../tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC__group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
#line 94
static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
#line 120
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 49 "../../tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(message_t *msg);
# 120 "../../tos/interfaces/Resource.nc"
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release(void );
#line 97
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__immediateRequest(void );
#line 88
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__request(void );
# 57 "../../tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(message_t *msg, error_t error);
# 51 "../../tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
message_t */*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending;

static inline error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(message_t *msg);
#line 68
static inline void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void );









static inline void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t result);
# 49 "../../tos/system/FcfsResourceQueueC.nc"
enum /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0____nesc_unnamed4351 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[1U];
uint8_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "../../tos/interfaces/ResourceRequested.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(
# 52 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb488900d0);
# 61 "../../tos/interfaces/ResourceRequested.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(
# 52 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb488900d0);
# 65 "../../tos/interfaces/ResourceConfigure.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb4888f730);
# 59 "../../tos/interfaces/ResourceConfigure.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb4888f730);
# 79 "../../tos/interfaces/ResourceQueue.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 102 "../../tos/interfaces/Resource.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb48892df0);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 68 "../../tos/system/SimpleArbiterP.nc"
enum /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4352 {
#line 68
  SimpleArbiterP__0__grantedTask = 0U
};
#line 68
typedef int /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4353 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4354 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE;
uint8_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;



static inline error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id);
#line 83
static inline error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 96
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id);
#line 149
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );








static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id);

static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 51 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(message_t *msg);
#line 45
static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(message_t *msg);
# 185 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static bool /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg);
# 97 "../../tos/interfaces/Ieee154Send.nc"
static void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 56 "../../tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(message_t *msg);
#line 68
static inline uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(message_t *msg);
#line 127
static inline void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error);




static inline void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error);









static inline message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg);








static inline message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(message_t *msg, void *payload, uint8_t len);
# 49 "../../tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(message_t *msg);
# 44 "../../tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(message_t *msg);
# 51 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength(void );
#line 56
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 45
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(message_t *msg);
# 57 "../../tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(message_t *msg, error_t error);
#line 57
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error);
# 44 "../../tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(message_t *msg);
# 91 "../../tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg);
#line 127
static network_header_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(message_t *msg);




static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg);
#line 145
enum /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0____nesc_unnamed4355 {


  TinyosNetworkLayerC__0__PAYLOAD_OFFSET = sizeof(network_header_t )
};




static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg);




static inline void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void );
#line 214
static inline void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg);
# 50 "../../tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress(void );




static am_group_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup(void );
# 44 "../../tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Receive__receive(message_t *msg);
# 51 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength(void );
#line 56
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 45
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(message_t *msg);
# 59 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
enum /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0____nesc_unnamed4356 {

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_MASK = (((IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_SRC_ADDR_MODE), 

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE = (((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE), 

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_PRESERVE = (1 << IEEE154_FCF_ACK_REQ)
   | (1 << IEEE154_FCF_FRAME_PENDING), 

  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_LENGTH = 3, 
  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK = IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE, 
  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE = IEEE154_TYPE_ACK << IEEE154_FCF_FRAME_TYPE
};

static ieee154_simple_header_t */*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(message_t *msg);
#line 94
static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg);






static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg);










static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);








static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);







static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack);
#line 160
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);




static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);




static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);




static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);




static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg);






static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg);






static inline ieee154_saddr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void );




static inline ieee154_panid_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void );




static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg);
#line 284
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void );
#line 317
static inline message_t */*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubReceive__receive(message_t *msg);
# 49 "../../tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(message_t *msg);
# 46 "../../tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(uint8_t idx);




static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(uint8_t idx);
# 57 "../../tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 72 "../../tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(am_addr_t id);
# 54 "../../tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(message_t *msg);
#line 47
static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(message_t *msg);
# 52 "../../tos/lib/rfxlink/layers/UniqueConfig.nc"
static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError(void );
#line 42
static uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(message_t *msg);
# 60 "../../tos/lib/rfxlink/layers/UniqueLayerP.nc"
uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber;

static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void );





static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg);










static inline void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error);




static inline bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg);





uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[5];

static inline message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg);
#line 115
static inline void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx);
# 113 "../../tos/interfaces/SplitControl.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(error_t error);
#line 138
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(error_t error);
# 57 "../../tos/lib/rfxlink/util/RadioState.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn(void );
# 57 "../../tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask(void );
#line 67
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask(void );
# 44 "../../tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(message_t *msg);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask(void );
# 49 "../../tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(message_t *msg);
# 50 "../../tos/lib/rfxlink/util/RadioChannel.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone(void );
# 72 "../../tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend(void );






static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume(void );
# 144 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4357 {
#line 144
  MessageBufferLayerP__0__stateDoneTask = 1U
};
#line 144
typedef int /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_stateDoneTask[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask];
#line 189
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4358 {
#line 189
  MessageBufferLayerP__0__sendTask = 2U
};
#line 189
typedef int /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_sendTask[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask];
#line 322
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4359 {
#line 322
  MessageBufferLayerP__0__deliverTask = 3U
};
#line 322
typedef int /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_deliverTask[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask];
#line 63
uint8_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state;
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4360 {

  MessageBufferLayerP__0__STATE_READY = 0, 
  MessageBufferLayerP__0__STATE_TX_PENDING = 1, 
  MessageBufferLayerP__0__STATE_TX_RETRY = 2, 
  MessageBufferLayerP__0__STATE_TX_SEND = 3, 
  MessageBufferLayerP__0__STATE_TX_DONE = 4, 
  MessageBufferLayerP__0__STATE_TURN_ON = 5, 
  MessageBufferLayerP__0__STATE_TURN_OFF = 6, 
  MessageBufferLayerP__0__STATE_CHANNEL = 7
};

static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void );
#line 144
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void );
#line 163
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void );
#line 176
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void );





message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg;
error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError;
uint8_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries;


enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4361 {
#line 187
  MessageBufferLayerP__0__MAX_RETRIES = 5
};
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void );
#line 217
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error);
#line 230
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg);
#line 252
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void );








static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void );
#line 291
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4362 {

  MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE = 3
};

message_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE];
message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE];

uint8_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead;
uint8_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;

static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void );









static inline bool /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg);









static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void );
#line 351
static inline message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg);
# 49 "../../tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(message_t *msg);
# 50 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(tradio_size timeout);
#line 45
static bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree(void );
#line 65
static tradio_size /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow(void );
# 52 "../../tos/interfaces/Random.nc"
static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16(void );
# 46 "../../tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(message_t *msg);
#line 40
static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(message_t *msg);










static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff(void );





static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(message_t *msg);
# 54 "../../tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(message_t *msg);
#line 47
static bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(message_t *msg);
# 64 "../../tos/lib/rfxlink/util/RadioSend.nc"
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready(void );
#line 57
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error_t error);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask(void );
# 78 "../../tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
enum /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_unnamed4363 {
#line 78
  RandomCollisionLayerP__0__calcNextRandom = 4U
};
#line 78
typedef int /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_sillytask_calcNextRandom[/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom];
#line 57
uint8_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state;
enum /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_unnamed4364 {

  RandomCollisionLayerP__0__STATE_READY = 0, 
  RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST = 1, 
  RandomCollisionLayerP__0__STATE_TX_PENDING_SECOND = 2, 
  RandomCollisionLayerP__0__STATE_TX_SENDING = 3, 

  RandomCollisionLayerP__0__STATE_BARRIER = 0x80
};

message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg;
uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier;

static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void );





uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom;
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void );





static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(uint16_t maxBackoff);
#line 98
static inline error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg);
#line 110
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void );
#line 155
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error);







static inline bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg);




static inline message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg);
# 52 "../../tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 49 "../../tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(message_t *msg);
# 50 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(tradio_size timeout);




static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel(void );
#line 45
static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree(void );
# 57 "../../tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(message_t *msg);
#line 42
static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__get(message_t *msg);









static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__set(message_t *msg);
# 86 "../../tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError(void );
#line 80
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(message_t *data, message_t *ack);
#line 55
static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(message_t *msg);






static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(message_t *msg);






static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(message_t *data, message_t *ack);
#line 43
static uint16_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout(void );





static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__setAckRequired(message_t *msg, bool ack);
#line 75
static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(message_t *msg);
# 54 "../../tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(message_t *msg);
#line 47
static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(message_t *msg);
# 64 "../../tos/lib/rfxlink/util/RadioSend.nc"
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__ready(void );
#line 57
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error_t error);
# 60 "../../tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
uint8_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state;
enum /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0____nesc_unnamed4365 {

  SoftwareAckLayerC__0__STATE_READY = 0, 
  SoftwareAckLayerC__0__STATE_DATA_SEND = 1, 
  SoftwareAckLayerC__0__STATE_ACK_WAIT = 2, 
  SoftwareAckLayerC__0__STATE_ACK_SEND = 3
};

message_t */*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg;
message_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg;

static inline void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready(void );





static inline error_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg);
#line 97
static inline void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error);
#line 124
static inline void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void );









static inline bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg);
#line 147
static inline message_t */*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg);
#line 181
static inline error_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__requestAck(message_t *msg);
#line 195
static inline bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__wasAcked(message_t *msg);
# 57 "../../tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(message_t *msg);
#line 42
static bool /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__get(message_t *msg);









static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(message_t *msg);
# 51 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength(void );
#line 56
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 45
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(message_t *msg);
#line 67
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(message_t *msg);
# 61 "../../tos/lib/timer/LocalTime.nc"
static uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeRadio__get(void );
#line 61
static uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeMilli__get(void );
# 60 "../../tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline timestamp_metadata_t */*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(message_t *msg);






static inline bool /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__isValid(message_t *msg);




static inline uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__timestamp(message_t *msg);




static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(message_t *msg);




static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(message_t *msg, uint32_t value);







static inline bool /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__isValid(message_t *msg);




static inline uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__timestamp(message_t *msg);
#line 116
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void );




static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 89 "../../tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
static uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void );
#line 82
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlB(uint8_t control);
#line 81
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlA(uint8_t control);
# 78 "../../tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__fired(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__overflow(void );
# 68 "../../tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__setTimer2Asynchronous(void );
#line 86
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__compareABusy(void );
# 48 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__start(void );
# 61 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get(void );
# 73 "../../tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0;
#line 74
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0____nesc_unnamed4366 {
  Atm1281AlarmAsyncP__0__MINDT = 2, 
  Atm1281AlarmAsyncP__0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init(void );
#line 112
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setOcr2A(uint8_t n);
#line 128
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt(void );
#line 187
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired(void );
#line 199
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get(void );
#line 242
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow(void );
# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer2AsyncP__Compare__fired(void );
# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer2AsyncP__Timer__overflow(void );
# 99 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__Timer__get(void );
#line 131
static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(uint8_t x);





static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(uint8_t x);
#line 154
static inline uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag(void );
#line 181
static inline void HplAtm1281Timer2AsyncP__Compare__start(void );









static inline uint8_t HplAtm1281Timer2AsyncP__Compare__get(void );


static inline void HplAtm1281Timer2AsyncP__Compare__set(uint8_t t);









static __inline void HplAtm1281Timer2AsyncP__stabiliseTimer2(void );
#line 219
static inline mcu_power_t HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState(void );
#line 242
void __vector_13(void ) __attribute((signal))   ;







void __vector_15(void ) __attribute((signal))   ;
#line 266
static inline void HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void );
#line 278
static inline int HplAtm1281Timer2AsyncP__TimerAsync__compareABusy(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "../../tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "../../tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4367 {
#line 74
  AlarmToTimerC__0__fired = 5U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "../../tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fbb48418a40);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4368 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 6U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4369 {

  VirtualizeTimerC__0__NUM_TIMERS = 6, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4370 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 64 "../../tos/lib/timer/Counter.nc"
static /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__get(void );
# 53 "../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__get(void );




static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 51 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength(void );
#line 56
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 45
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(message_t *msg);
#line 67
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(message_t *msg);
# 54 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline flags_metadata_t */*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(message_t *msg);






static inline bool /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(uint8_t bit, message_t *msg);




static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(uint8_t bit, message_t *msg);






static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(uint8_t bit, message_t *msg);
#line 90
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void );




static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg);
# 53 "../../tos/lib/rfxlink/util/RadioCCA.nc"
static void RF230DriverLayerP__RadioCCA__done(error_t error);
# 66 "../../tos/lib/timer/BusyWait.nc"
static void RF230DriverLayerP__BusyWait__wait(RF230DriverLayerP__BusyWait__size_type dt);
# 57 "../../tos/lib/rfxlink/util/PacketFlag.nc"
static void RF230DriverLayerP__RSSIFlag__clear(message_t *msg);
#line 52
static void RF230DriverLayerP__RSSIFlag__set(message_t *msg);
# 70 "../../tos/interfaces/PacketTimeStamp.nc"
static void RF230DriverLayerP__PacketTimeStamp__clear(
#line 66
message_t * msg);
#line 78
static void RF230DriverLayerP__PacketTimeStamp__set(
#line 73
message_t * msg, 




RF230DriverLayerP__PacketTimeStamp__size_type value);
# 46 "../../tos/interfaces/GeneralIO.nc"
static void RF230DriverLayerP__RSTN__makeOutput(void );
#line 40
static void RF230DriverLayerP__RSTN__set(void );
static void RF230DriverLayerP__RSTN__clr(void );
# 50 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
static void RF230DriverLayerP__RadioAlarm__wait(tradio_size timeout);
#line 45
static bool RF230DriverLayerP__RadioAlarm__isFree(void );
#line 65
static tradio_size RF230DriverLayerP__RadioAlarm__getNow(void );
# 70 "../../tos/lib/rfxlink/util/RadioState.nc"
static void RF230DriverLayerP__RadioState__done(void );
# 61 "../../tos/lib/timer/LocalTime.nc"
static uint32_t RF230DriverLayerP__LocalTime__get(void );
# 46 "../../tos/interfaces/GeneralIO.nc"
static void RF230DriverLayerP__SLP_TR__makeOutput(void );
#line 40
static void RF230DriverLayerP__SLP_TR__set(void );
static void RF230DriverLayerP__SLP_TR__clr(void );
# 46 "../../tos/chips/rf230/RF230DriverConfig.nc"
static uint8_t RF230DriverLayerP__Config__maxPayloadLength(void );
#line 40
static uint8_t RF230DriverLayerP__Config__headerLength(message_t *msg);
#line 52
static uint8_t RF230DriverLayerP__Config__metadataLength(message_t *msg);






static uint8_t RF230DriverLayerP__Config__headerPreloadLength(void );





static bool RF230DriverLayerP__Config__requiresRssiCca(message_t *msg);
# 54 "../../tos/lib/rfxlink/util/RadioReceive.nc"
static message_t *RF230DriverLayerP__RadioReceive__receive(message_t *msg);
#line 47
static bool RF230DriverLayerP__RadioReceive__header(message_t *msg);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t RF230DriverLayerP__releaseSpi__postTask(void );
# 120 "../../tos/interfaces/Resource.nc"
static error_t RF230DriverLayerP__SpiResource__release(void );
#line 97
static error_t RF230DriverLayerP__SpiResource__immediateRequest(void );
#line 88
static error_t RF230DriverLayerP__SpiResource__request(void );
#line 128
static bool RF230DriverLayerP__SpiResource__isOwner(void );
# 46 "../../tos/interfaces/GeneralIO.nc"
static void RF230DriverLayerP__SELN__makeOutput(void );
#line 40
static void RF230DriverLayerP__SELN__set(void );
static void RF230DriverLayerP__SELN__clr(void );
# 64 "../../tos/lib/rfxlink/util/RadioSend.nc"
static void RF230DriverLayerP__RadioSend__ready(void );
#line 57
static void RF230DriverLayerP__RadioSend__sendDone(error_t error);
# 66 "../../tos/interfaces/GpioCapture.nc"
static void RF230DriverLayerP__IRQ__disable(void );
#line 53
static error_t RF230DriverLayerP__IRQ__captureRisingEdge(void );
# 62 "../../tos/interfaces/FastSpiByte.nc"
static void RF230DriverLayerP__FastSpiByte__splitWrite(uint8_t data);
#line 74
static uint8_t RF230DriverLayerP__FastSpiByte__splitReadWrite(uint8_t data);
#line 68
static uint8_t RF230DriverLayerP__FastSpiByte__splitRead(void );
#line 81
static uint8_t RF230DriverLayerP__FastSpiByte__write(uint8_t data);
# 42 "../../tos/lib/rfxlink/util/PacketFlag.nc"
static bool RF230DriverLayerP__TimeSyncFlag__get(message_t *msg);









static void RF230DriverLayerP__TimeSyncFlag__set(message_t *msg);




static void RF230DriverLayerP__TransmitPowerFlag__clear(message_t *msg);
#line 42
static bool RF230DriverLayerP__TransmitPowerFlag__get(message_t *msg);
# 59 "../../tos/lib/rfxlink/util/Tasklet.nc"
static void RF230DriverLayerP__Tasklet__schedule(void );
# 856 "../../tos/chips/rf230/RF230DriverLayerP.nc"
enum RF230DriverLayerP____nesc_unnamed4371 {
#line 856
  RF230DriverLayerP__releaseSpi = 7U
};
#line 856
typedef int RF230DriverLayerP____nesc_sillytask_releaseSpi[RF230DriverLayerP__releaseSpi];
#line 96
static inline rf230_header_t *RF230DriverLayerP__getHeader(message_t *msg);




static void *RF230DriverLayerP__getPayload(message_t *msg);




static rf230_metadata_t *RF230DriverLayerP__getMeta(message_t *msg);






uint8_t RF230DriverLayerP__state;
enum RF230DriverLayerP____nesc_unnamed4372 {

  RF230DriverLayerP__STATE_P_ON = 0, 
  RF230DriverLayerP__STATE_SLEEP = 1, 
  RF230DriverLayerP__STATE_SLEEP_2_TRX_OFF = 2, 
  RF230DriverLayerP__STATE_TRX_OFF = 3, 
  RF230DriverLayerP__STATE_TRX_OFF_2_RX_ON = 4, 
  RF230DriverLayerP__STATE_RX_ON = 5, 
  RF230DriverLayerP__STATE_BUSY_TX_2_RX_ON = 6
};

uint8_t RF230DriverLayerP__cmd;
enum RF230DriverLayerP____nesc_unnamed4373 {

  RF230DriverLayerP__CMD_NONE = 0, 
  RF230DriverLayerP__CMD_TURNOFF = 1, 
  RF230DriverLayerP__CMD_STANDBY = 2, 
  RF230DriverLayerP__CMD_TURNON = 3, 
  RF230DriverLayerP__CMD_TRANSMIT = 4, 
  RF230DriverLayerP__CMD_RECEIVE = 5, 
  RF230DriverLayerP__CMD_CCA = 6, 
  RF230DriverLayerP__CMD_CHANNEL = 7, 
  RF230DriverLayerP__CMD_SIGNAL_DONE = 8, 
  RF230DriverLayerP__CMD_DOWNLOAD = 9
};

bool RF230DriverLayerP__radioIrq;

uint8_t RF230DriverLayerP__txPower;
uint8_t RF230DriverLayerP__channel;

message_t *RF230DriverLayerP__rxMsg;
message_t RF230DriverLayerP__rxMsgBuffer;

uint16_t RF230DriverLayerP__capturedTime;

uint8_t RF230DriverLayerP__rssiClear;
uint8_t RF230DriverLayerP__rssiBusy;



static __inline void RF230DriverLayerP__writeRegister(uint8_t reg, uint8_t value);
#line 167
static __inline uint8_t RF230DriverLayerP__readRegister(uint8_t reg);
#line 183
enum RF230DriverLayerP____nesc_unnamed4374 {

  RF230DriverLayerP__SLEEP_WAKEUP_TIME = (uint16_t )(880 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL), 
  RF230DriverLayerP__CCA_REQUEST_TIME = (uint16_t )(140 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL), 

  RF230DriverLayerP__TX_SFD_DELAY = (uint16_t )(176 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL), 
  RF230DriverLayerP__RX_SFD_DELAY = (uint16_t )(8 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL)
};

static inline void RF230DriverLayerP__RadioAlarm__fired(void );
#line 218
static inline error_t RF230DriverLayerP__PlatformInit__init(void );
#line 236
static inline error_t RF230DriverLayerP__SoftwareInit__init(void );





static inline void RF230DriverLayerP__initRadio(void );
#line 270
static inline void RF230DriverLayerP__SpiResource__granted(void );
#line 282
static bool RF230DriverLayerP__isSpiAcquired(void );
#line 319
static __inline void RF230DriverLayerP__changeChannel(void );
#line 337
static __inline void RF230DriverLayerP__changeState(void );
#line 419
static inline error_t RF230DriverLayerP__RadioState__turnOn(void );
#line 436
static error_t RF230DriverLayerP__RadioSend__send(message_t *msg);
#line 608
static inline void RF230DriverLayerP__RadioCCA__default__done(error_t error);



static __inline void RF230DriverLayerP__downloadMessage(void );
#line 697
static inline void RF230DriverLayerP__IRQ__captured(uint16_t time);
#line 710
static inline void RF230DriverLayerP__serviceRadio(void );
#line 856
static inline void RF230DriverLayerP__releaseSpi__runTask(void );




static inline void RF230DriverLayerP__Tasklet__run(void );
#line 891
static inline uint8_t RF230DriverLayerP__RadioPacket__headerLength(message_t *msg);




static inline uint8_t RF230DriverLayerP__RadioPacket__payloadLength(message_t *msg);




static void RF230DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);








static inline uint8_t RF230DriverLayerP__RadioPacket__maxPayloadLength(void );






static inline uint8_t RF230DriverLayerP__RadioPacket__metadataLength(message_t *msg);
#line 929
static inline bool RF230DriverLayerP__PacketTransmitPower__isSet(message_t *msg);




static inline uint8_t RF230DriverLayerP__PacketTransmitPower__get(message_t *msg);
#line 962
static inline void RF230DriverLayerP__PacketRSSI__clear(message_t *msg);




static inline void RF230DriverLayerP__PacketRSSI__set(message_t *msg, uint8_t value);










static inline bool RF230DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg);




static inline uint8_t RF230DriverLayerP__PacketTimeSyncOffset__get(message_t *msg);









static inline void RF230DriverLayerP__PacketTimeSyncOffset__set(message_t *msg, uint8_t value);
#line 1017
static inline void RF230DriverLayerP__PacketLinkQuality__set(message_t *msg, uint8_t value);
# 44 "../../tos/interfaces/GeneralIO.nc"
static void HplRF230P__PortCLKM__makeInput(void );
#line 41
static void HplRF230P__PortCLKM__clr(void );
# 88 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplRF230P__Capture__setEdge(bool up);
#line 47
static HplRF230P__Capture__size_type HplRF230P__Capture__get(void );
#line 64
static void HplRF230P__Capture__reset(void );


static void HplRF230P__Capture__start(void );


static void HplRF230P__Capture__stop(void );
# 44 "../../tos/interfaces/GeneralIO.nc"
static void HplRF230P__PortIRQ__makeInput(void );
#line 41
static void HplRF230P__PortIRQ__clr(void );
# 61 "../../tos/interfaces/GpioCapture.nc"
static void HplRF230P__IRQ__captured(uint16_t time);
# 53 "../../tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline error_t HplRF230P__PlatformInit__init(void );










static inline void HplRF230P__Capture__captured(uint16_t time);









static inline error_t HplRF230P__IRQ__captureRisingEdge(void );
#line 89
static inline void HplRF230P__IRQ__disable(void );
# 88 "../../tos/interfaces/SpiPacket.nc"
static void Atm128SpiP__SpiPacket__sendDone(
#line 81
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 89 "../../tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__sleep(void );
#line 83
static void Atm128SpiP__Spi__initMaster(void );
#line 113
static void Atm128SpiP__Spi__enableInterrupt(bool enabled);
#line 97
static uint8_t Atm128SpiP__Spi__read(void );
#line 141
static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on);
#line 131
static void Atm128SpiP__Spi__setClock(uint8_t speed);




static bool Atm128SpiP__Spi__isInterruptPending(void );
#line 125
static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle);
#line 103
static void Atm128SpiP__Spi__write(uint8_t data);
#line 116
static void Atm128SpiP__Spi__enableSpi(bool busOn);
#line 128
static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing);
# 52 "../../tos/interfaces/McuPowerState.nc"
static void Atm128SpiP__McuPowerState__update(void );
# 294 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP____nesc_unnamed4375 {
#line 294
  Atm128SpiP__zeroTask = 8U
};
#line 294
typedef int Atm128SpiP____nesc_sillytask_zeroTask[Atm128SpiP__zeroTask];
#line 103
uint16_t Atm128SpiP__len;
uint8_t * Atm128SpiP__txBuffer;
uint8_t * Atm128SpiP__rxBuffer;
uint16_t Atm128SpiP__pos;

enum Atm128SpiP____nesc_unnamed4376 {
  Atm128SpiP__SPI_IDLE, 
  Atm128SpiP__SPI_BUSY, 
  Atm128SpiP__SPI_ATOMIC_SIZE = 10
};
#line 124
enum Atm128SpiP____nesc_unnamed4377 {
  Atm128SpiP__PLATFORM_MHZ = 8
};


static void Atm128SpiP__startSpi(void );
#line 165
static inline void Atm128SpiP__stopSpi(void );







static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
#line 192
static __inline void Atm128SpiP__FastSpiByte__splitWrite(uint8_t data);



static __inline uint8_t Atm128SpiP__FastSpiByte__splitRead(void );





static __inline uint8_t Atm128SpiP__FastSpiByte__splitReadWrite(uint8_t data);
#line 214
static __inline uint8_t Atm128SpiP__FastSpiByte__write(uint8_t data);
#line 249
static inline error_t Atm128SpiP__sendNextPart(void );
#line 294
static inline void Atm128SpiP__zeroTask__runTask(void );
#line 349
static inline 
#line 348
void Atm128SpiP__SpiPacket__default__sendDone(
uint8_t *_txbuffer, uint8_t *_rxbuffer, 
uint16_t _length, error_t _success);

static inline void Atm128SpiP__Spi__dataReady(uint8_t data);
#line 392
static inline void Atm128SpiP__ResourceConfigure__configure(uint8_t id);



static inline void Atm128SpiP__ResourceConfigure__unconfigure(uint8_t id);
# 44 "../../tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MISO__makeInput(void );

static void HplAtm128SpiP__SCK__makeOutput(void );
#line 46
static void HplAtm128SpiP__SS__makeOutput(void );
# 52 "../../tos/interfaces/McuPowerState.nc"
static void HplAtm128SpiP__Mcu__update(void );
# 109 "../../tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__dataReady(uint8_t data);
# 46 "../../tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MOSI__makeOutput(void );
# 96 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void );
#line 112
static inline void HplAtm128SpiP__SPI__sleep(void );


static inline uint8_t HplAtm128SpiP__SPI__read(void );
static inline void HplAtm128SpiP__SPI__write(uint8_t d);


void __vector_24(void ) __attribute((signal))   ;




static inline bool HplAtm128SpiP__SPI__isInterruptPending(void );







static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 147
static void HplAtm128SpiP__SPI__enableSpi(bool enabled);
#line 173
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 186
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 200
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
#line 217
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v);
#line 230
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
# 49 "../../tos/system/FcfsResourceQueueC.nc"
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1____nesc_unnamed4378 {
#line 49
  FcfsResourceQueueC__1__NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[1U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void );




static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );



static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "../../tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__requested(
# 52 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb488900d0);
# 61 "../../tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__immediateRequested(
# 52 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb488900d0);
# 65 "../../tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__unconfigure(
# 56 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb4888f730);
# 59 "../../tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(
# 56 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb4888f730);
# 79 "../../tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__dequeue(void );
# 102 "../../tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__granted(
# 51 "../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fbb48892df0);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__postTask(void );
# 68 "../../tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1____nesc_unnamed4379 {
#line 68
  SimpleArbiterP__1__grantedTask = 9U
};
#line 68
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1____nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1____nesc_unnamed4380 {
#line 62
  SimpleArbiterP__1__RES_IDLE = 0, SimpleArbiterP__1__RES_GRANTING = 1, SimpleArbiterP__1__RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1____nesc_unnamed4381 {
#line 63
  SimpleArbiterP__1__NO_RES = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_IDLE;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__NO_RES;



static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__request(uint8_t id);
#line 83
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__immediateRequest(uint8_t id);
#line 96
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__release(uint8_t id);
#line 142
static inline bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__isOwner(uint8_t id);






static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__runTask(void );








static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__default__granted(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__requested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__immediateRequested(uint8_t id);
# 78 "../../tos/lib/timer/Alarm.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__fired(void );
# 62 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__reset(void );
#line 54
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__set(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__size_type t);










static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__start(void );


static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__stop(void );
# 61 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__get(void );
# 62 "../../tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__getNow(void );
#line 74
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__stop(void );



static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__timer_size dt);




static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__timer_size t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__timer_size dt);
#line 119
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__fired(void );





static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__overflow(void );
# 64 "../../tos/lib/timer/Counter.nc"
static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__get(void );






static bool /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__isOverflowPending(void );










static void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__Counter__overflow(void );
# 67 "../../tos/lib/timer/TransformCounterC.nc"
/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__upper_count_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__m_upper;

enum /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1____nesc_unnamed4382 {

  TransformCounterC__1__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__1__HIGH_SHIFT_LEFT = 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__from_size_type ) - /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__LOW_SHIFT_RIGHT, 
  TransformCounterC__1__NUM_UPPER_BITS = 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__to_size_type ) - 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__from_size_type ) + 0, 



  TransformCounterC__1__OVERFLOW_MASK = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__NUM_UPPER_BITS ? ((/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__upper_count_type )2 << (/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__Counter__get(void );
#line 133
static inline void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void );
# 64 "../../tos/lib/timer/Counter.nc"
static /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get(void );
# 53 "../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void );




static inline void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 40 "../../tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt);
# 80 "../../tos/interfaces/Queue.nc"
static 
#line 78
/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__t  

/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__head(void );
#line 97
static error_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__enqueue(
#line 93
/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__t  newVal);
#line 88
static 
#line 86
/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__t  

/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__dequeue(void );
#line 50
static bool /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__empty(void );
#line 65
static uint8_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__size(void );
#line 80
static 
#line 78
/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__t  

/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__head(void );
#line 97
static error_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__enqueue(
#line 93
/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__t  newVal);
#line 88
static 
#line 86
/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__t  

/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__dequeue(void );
#line 50
static bool /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__empty(void );
#line 65
static uint8_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__size(void );
#line 80
static 
#line 78
/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__t  

/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__head(void );
#line 97
static error_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__enqueue(
#line 93
/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__t  newVal);
#line 88
static 
#line 86
/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__t  

/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__dequeue(void );
#line 50
static bool /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__empty(void );
#line 65
static uint8_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__size(void );
# 15 "PrioCritQueueP.nc"
/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__queue_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__null_elt;









static uint8_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__size(void );







static inline /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__queue_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__head(error_t *status);
#line 48
static inline /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__queue_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__headHI(error_t *status);
#line 93
static inline error_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__enqueue(/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__queue_t newVal, uint8_t prio);








static /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__queue_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__dequeuePrio(uint8_t prio);








static inline /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__queue_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__headPrio(uint8_t prio);








static uint8_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__sizePrio(uint8_t prio);








static void /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__clear(void );





static inline void /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__clearLO(void );
#line 158
static inline uint8_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__sizeLO_Q1(void );





static inline uint8_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__sizeLO_Q2(void );





static inline uint8_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__sizeLO_Q3(void );
# 48 "../../tos/system/QueueC.nc"
/*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__queue_t  /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__queue[20];
uint8_t /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__head = 0;
uint8_t /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__tail = 0;
uint8_t /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__size = 0;

static inline bool /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__empty(void );







static inline uint8_t /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__size(void );



static inline uint8_t /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__maxSize(void );



static inline /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__queue_t /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__head(void );



static inline void /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__printQueue(void );
#line 89
static /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__queue_t /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__dequeue(void );
#line 101
static inline error_t /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__enqueue(/*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__queue_t newVal);
#line 48
/*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__queue_t  /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__queue[20];
uint8_t /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__head = 0;
uint8_t /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__tail = 0;
uint8_t /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__size = 0;

static inline bool /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__empty(void );







static inline uint8_t /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__size(void );



static inline uint8_t /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__maxSize(void );



static inline /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__queue_t /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__head(void );



static inline void /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__printQueue(void );
#line 89
static /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__queue_t /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__dequeue(void );
#line 101
static inline error_t /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__enqueue(/*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__queue_t newVal);
#line 48
/*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__queue_t  /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__queue[20];
uint8_t /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__head = 0;
uint8_t /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__tail = 0;
uint8_t /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__size = 0;

static inline bool /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__empty(void );







static inline uint8_t /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__size(void );



static inline uint8_t /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__maxSize(void );



static inline /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__queue_t /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__head(void );



static inline void /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__printQueue(void );
#line 89
static /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__queue_t /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__dequeue(void );
#line 101
static inline error_t /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__enqueue(/*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__queue_t newVal);
# 61 "../../tos/lib/timer/LocalTime.nc"
static uint32_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__LocalTime__get(void );
# 104 "../../tos/interfaces/SplitControl.nc"
static error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__RadioControl__start(void );
# 64 "../../tos/interfaces/TimeSyncAMSend.nc"
static error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Send__send(am_addr_t addr, message_t *msg, uint8_t len, /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Send__size_type event_time);
#line 114
static void */*TimeSyncC.TimeSyncP*/TimeSyncP__0__Send__getPayload(message_t *msg, uint8_t len);
# 52 "../../tos/interfaces/Random.nc"
static uint16_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Random__rand16(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__sendMsg__postTask(void );
#line 67
static error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__processMsg__postTask(void );
# 67 "../../tos/interfaces/Leds.nc"
static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Leds__led0Toggle(void );
#line 83
static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Leds__led1Toggle(void );
# 46 "../../tos/lib/ftsp/TimeSyncNotify.nc"
static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncNotify__msg_received(void );





static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncNotify__msg_sent(void );
# 64 "../../tos/lib/timer/Timer.nc"
static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Timer__startPeriodic(uint32_t dt);
#line 78
static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Timer__stop(void );
# 48 "../../tos/interfaces/TimeSyncPacket.nc"
static bool /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncPacket__isValid(message_t *msg);









static /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncPacket__size_type /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncPacket__eventTime(message_t *msg);
# 292 "../../tos/lib/ftsp/TimeSyncP.nc"
enum /*TimeSyncC.TimeSyncP*/TimeSyncP__0____nesc_unnamed4383 {
#line 292
  TimeSyncP__0__processMsg = 10U
};
#line 292
typedef int /*TimeSyncC.TimeSyncP*/TimeSyncP__0____nesc_sillytask_processMsg[/*TimeSyncC.TimeSyncP*/TimeSyncP__0__processMsg];
#line 349
enum /*TimeSyncC.TimeSyncP*/TimeSyncP__0____nesc_unnamed4384 {
#line 349
  TimeSyncP__0__sendMsg = 11U
};
#line 349
typedef int /*TimeSyncC.TimeSyncP*/TimeSyncP__0____nesc_sillytask_sendMsg[/*TimeSyncC.TimeSyncP*/TimeSyncP__0__sendMsg];
#line 75
enum /*TimeSyncC.TimeSyncP*/TimeSyncP__0____nesc_unnamed4385 {
  TimeSyncP__0__MAX_ENTRIES = 8, 
  TimeSyncP__0__BEACON_RATE = 10, 
  TimeSyncP__0__ROOT_TIMEOUT = 5, 
  TimeSyncP__0__IGNORE_ROOT_MSG = 4, 
  TimeSyncP__0__ENTRY_VALID_LIMIT = 4, 
  TimeSyncP__0__ENTRY_SEND_LIMIT = 3, 
  TimeSyncP__0__ENTRY_THROWOUT_LIMIT = 500
};






#line 85
typedef struct /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TableItem {

  uint8_t state;
  uint32_t localTime;
  int32_t timeOffset;
} /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TableItem;

enum /*TimeSyncC.TimeSyncP*/TimeSyncP__0____nesc_unnamed4386 {
  TimeSyncP__0__ENTRY_EMPTY = 0, 
  TimeSyncP__0__ENTRY_FULL = 1
};

/*TimeSyncC.TimeSyncP*/TimeSyncP__0__TableItem /*TimeSyncC.TimeSyncP*/TimeSyncP__0__table[/*TimeSyncC.TimeSyncP*/TimeSyncP__0__MAX_ENTRIES];
uint8_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__tableEntries;

enum /*TimeSyncC.TimeSyncP*/TimeSyncP__0____nesc_unnamed4387 {
  TimeSyncP__0__STATE_IDLE = 0x00, 
  TimeSyncP__0__STATE_PROCESSING = 0x01, 
  TimeSyncP__0__STATE_SENDING = 0x02, 
  TimeSyncP__0__STATE_INIT = 0x04
};

uint8_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__state;
#line 107
uint8_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__mode;
#line 119
float /*TimeSyncC.TimeSyncP*/TimeSyncP__0__skew;
uint32_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__localAverage;
int32_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__offsetAverage;
uint8_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__numEntries;

message_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__processedMsgBuffer;
message_t */*TimeSyncC.TimeSyncP*/TimeSyncP__0__processedMsg;

message_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsgBuffer;
TimeSyncMsg */*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg;

uint8_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__heartBeats;


static inline uint32_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__GlobalTime__getLocalTime(void );










static error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__is_synced(void );








static error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__GlobalTime__local2Global(uint32_t *time);
#line 166
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__calculateConversion(void );
#line 232
static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__clearTable(void );








uint8_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__numErrors = 0;
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__addNewEntry(TimeSyncMsg *msg);
#line 292
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__processMsg__runTask(void );
#line 321
static inline message_t */*TimeSyncC.TimeSyncP*/TimeSyncP__0__Receive__receive(message_t *msg, void *payload, uint8_t len);
#line 349
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__sendMsg__runTask(void );
#line 389
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Send__sendDone(message_t *ptr, error_t error);
#line 407
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__timeSyncMsgSend(void );
#line 420
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Timer__fired(void );








static inline error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncMode__setMode(uint8_t mode_);
#line 452
static inline error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Init__init(void );
#line 471
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Boot__booted(void );






static inline error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__StdControl__start(void );
#line 501
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncNotify__default__msg_received(void );
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncNotify__default__msg_sent(void );

static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__RadioControl__startDone(error_t error);
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__RadioControl__stopDone(error_t error);
# 80 "../../tos/interfaces/AMSend.nc"
static error_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__SubAMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__SubAMSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 93 "../../tos/interfaces/TimeSyncAMSend.nc"
static void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendMilli__sendDone(
# 47 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
am_id_t arg_0x7fbb47eb1360, 
# 93 "../../tos/interfaces/TimeSyncAMSend.nc"
message_t *msg, error_t error);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__Snoop__receive(
# 42 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
am_id_t arg_0x7fbb47eba6d0, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 78 "../../tos/interfaces/Packet.nc"
static uint8_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__SubPacket__payloadLength(
#line 74
message_t * msg);
# 93 "../../tos/interfaces/TimeSyncAMSend.nc"
static void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendRadio__sendDone(
# 46 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
am_id_t arg_0x7fbb47eb7c00, 
# 93 "../../tos/interfaces/TimeSyncAMSend.nc"
message_t *msg, error_t error);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__Receive__receive(
# 41 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
am_id_t arg_0x7fbb47ebd960, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 59 "../../tos/lib/rfxlink/util/PacketField.nc"
static void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__PacketTimeSyncOffset__set(message_t *msg, /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__PacketTimeSyncOffset__value_type value);
# 61 "../../tos/lib/timer/LocalTime.nc"
static uint32_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__LocalTimeRadio__get(void );
#line 61
static uint32_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__LocalTimeMilli__get(void );
# 63 "../../tos/interfaces/PacketTimeStamp.nc"
static /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__PacketTimeStampMilli__size_type /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__PacketTimeStampMilli__timestamp(
#line 52
message_t * msg);
#line 49
static bool /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__PacketTimeStampMilli__isValid(
#line 38
message_t * msg);
# 73 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
static __inline timesync_footer_t */*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__getFooter(message_t *msg);
#line 91
static inline uint8_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__Packet__payloadLength(message_t *msg);
#line 143
static __inline am_id_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__AMPacket__type(message_t *msg);
#line 165
static inline error_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendRadio__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len, uint32_t event_time);
#line 181
static inline void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendRadio__default__sendDone(am_id_t id, message_t *msg, error_t error);








static inline void */*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendRadio__getPayload(am_id_t id, message_t *msg, uint8_t len);






static inline error_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendMilli__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len, uint32_t event_time);
#line 210
static inline void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendMilli__default__sendDone(am_id_t id, message_t *msg, error_t error);








static inline void */*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendMilli__getPayload(am_id_t id, message_t *msg, uint8_t len);






static void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__SubAMSend__sendDone(message_t *msg, error_t error);









static inline message_t */*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);









static inline message_t */*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);

static inline message_t */*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__SubSnoop__receive(message_t *msg, void *payload, uint8_t len);






static inline message_t */*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
#line 271
static inline bool /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncPacketMilli__isValid(message_t *msg);




static inline uint32_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncPacketMilli__eventTime(message_t *msg);
# 110 "../../tos/interfaces/AMSend.nc"
static void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "../../tos/interfaces/Send.nc"
static error_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__getPayload(
#line 122
message_t * msg, 


uint8_t len);
# 103 "../../tos/interfaces/AMPacket.nc"
static void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "../../tos/system/AMQueueEntryP.nc"
static inline error_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err);







static inline void */*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(message_t *m, uint8_t len);
# 80 "../../tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(
# 48 "../../tos/system/AMQueueImplP.nc"
am_id_t arg_0x7fbb47ddbb60, 
# 80 "../../tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__getPayload(
# 48 "../../tos/system/AMQueueImplP.nc"
am_id_t arg_0x7fbb47ddbb60, 
# 132 "../../tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 100 "../../tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 46 "../../tos/system/AMQueueImplP.nc"
uint8_t arg_0x7fbb47ddc940, 
# 96 "../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "../../tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 94
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void );
# 78 "../../tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(
#line 143
message_t * amsg);
# 126 "../../tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4388 {
#line 126
  AMQueueImplP__0__CancelTask = 12U
};
#line 126
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
#line 169
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4389 {
#line 169
  AMQueueImplP__0__errorTask = 13U
};
#line 169
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
#line 57
#line 55
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4390 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[1];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[1 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void );
#line 90
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
#line 163
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );
#line 189
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 211
static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(uint8_t id, message_t *m, uint8_t len);



static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 55 "../../tos/system/NoLedsC.nc"
static inline void NoLedsC__Leds__led0Toggle(void );



static inline void NoLedsC__Leds__led1Toggle(void );
# 100 "../../tos/interfaces/Send.nc"
static void MCCP__FlowSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 104 "../../tos/interfaces/SplitControl.nc"
static error_t MCCP__MacControl__start(void );
# 75 "../../tos/interfaces/Send.nc"
static error_t MCCP__MacSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 33 "../../tos/interfaces/FrameConfiguration.nc"
static void MCCP__FrameConfiguration__setFrameLength(uint8_t numSlots);
#line 32
static void MCCP__FrameConfiguration__setSlotLength(uint32_t slotTimeBms);
# 36 "MCCP.nc"
message_t MCCP__packet;






uint16_t MCCP__packetsSent;
#line 43
uint16_t MCCP__packetsReceived;
bool MCCP__sends;


uint32_t MCCP__slotSize;
uint8_t MCCP__curFrameSize;


static inline void MCCP__Boot__booted(void );








static inline void MCCP__MacControl__startDone(error_t error);
#line 76
static inline void MCCP__MacSend__sendDone(message_t *msg, error_t error);
#line 90
static inline message_t *MCCP__MacReceive__receive(message_t *msg, void *payload, uint8_t len);








static error_t MCCP__FlowSend__send(message_t *msg, uint8_t len);
# 110 "../../tos/interfaces/AMSend.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "../../tos/interfaces/Send.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "../../tos/interfaces/AMPacket.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "../../tos/system/AMQueueEntryP.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err);
# 80 "../../tos/interfaces/AMSend.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(
# 48 "../../tos/system/AMQueueImplP.nc"
am_id_t arg_0x7fbb47ddbb60, 
# 80 "../../tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "../../tos/interfaces/Send.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(
# 46 "../../tos/system/AMQueueImplP.nc"
uint8_t arg_0x7fbb47ddc940, 
# 96 "../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "../../tos/interfaces/Packet.nc"
static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__payloadLength(
#line 74
message_t * msg);
#line 94
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__postTask(void );
# 78 "../../tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(
#line 143
message_t * amsg);
# 126 "../../tos/system/AMQueueImplP.nc"
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_unnamed4391 {
#line 126
  AMQueueImplP__1__CancelTask = 14U
};
#line 126
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_sillytask_CancelTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask];
#line 169
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_unnamed4392 {
#line 169
  AMQueueImplP__1__errorTask = 15U
};
#line 169
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_sillytask_errorTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask];
#line 57
#line 55
typedef struct /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_unnamed4393 {
  message_t * msg;
} /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue_entry_t;

uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = 1;
/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue_entry_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[1];
uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[1 / 8 + 1];

static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend(void );

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__nextPacket(void );
#line 90
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask(void );
#line 163
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask(void );




static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend(void );
#line 189
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 215
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 75 "../../tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 110 "../../tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 47 "../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7fbb47cbde10, 
# 103 "../../tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 48 "../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7fbb47cb9060, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 60 "../../tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg);







static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 101
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);








static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );



static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len);
#line 148
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg);









static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr);
#line 172
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type);
# 113 "../../tos/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error);
#line 138
static void SerialP__SplitControl__stopDone(error_t error);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void );
# 95 "../../tos/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void );
# 49 "../../tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void );
# 56 "../../tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void );
#line 79
static void SerialP__SerialFrameComm__resetReceive(void );
#line 65
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void );
# 81 "../../tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
# 62 "../../tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
# 191 "../../tos/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4394 {
#line 191
  SerialP__RunTx = 16U
};
#line 191
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 322
enum SerialP____nesc_unnamed4395 {
#line 322
  SerialP__startDoneTask = 17U
};
#line 322
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];









enum SerialP____nesc_unnamed4396 {
#line 332
  SerialP__stopDoneTask = 18U
};
#line 332
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4397 {
#line 341
  SerialP__defaultSerialFlushTask = 19U
};
#line 341
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 81
enum SerialP____nesc_unnamed4398 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4399 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4400 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





#line 111
typedef enum SerialP____nesc_unnamed4401 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4402 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 124
typedef struct SerialP____nesc_unnamed4403 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 130
typedef struct SerialP____nesc_unnamed4404 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 135
typedef struct SerialP____nesc_unnamed4405 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static __inline void SerialP__txInit(void );
static __inline void SerialP__rxInit(void );
static __inline void SerialP__ackInit(void );

static __inline bool SerialP__ack_queue_is_full(void );
static __inline bool SerialP__ack_queue_is_empty(void );
static __inline void SerialP__ack_queue_push(uint8_t token);
static __inline uint8_t SerialP__ack_queue_top(void );
static inline uint8_t SerialP__ack_queue_pop(void );




static __inline void SerialP__rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP__rx_buffer_top(void );
static __inline uint8_t SerialP__rx_buffer_pop(void );
static __inline uint16_t SerialP__rx_current_crc(void );

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP__MaybeScheduleTx(void );




static __inline void SerialP__txInit(void );
#line 207
static __inline void SerialP__rxInit(void );








static __inline void SerialP__ackInit(void );



static inline error_t SerialP__Init__init(void );
#line 234
static __inline bool SerialP__ack_queue_is_full(void );









static __inline bool SerialP__ack_queue_is_empty(void );





static __inline void SerialP__ack_queue_push(uint8_t token);









static __inline uint8_t SerialP__ack_queue_top(void );









static inline uint8_t SerialP__ack_queue_pop(void );
#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP__rx_buffer_top(void );



static __inline uint8_t SerialP__rx_buffer_pop(void );





static __inline uint16_t SerialP__rx_current_crc(void );










static inline void SerialP__startDoneTask__runTask(void );









static inline void SerialP__stopDoneTask__runTask(void );



static inline void SerialP__SerialFlush__flushDone(void );




static inline void SerialP__defaultSerialFlushTask__runTask(void );


static inline void SerialP__SerialFlush__default__flush(void );



static inline error_t SerialP__SplitControl__start(void );








static void SerialP__testOff(void );
#line 394
static inline void SerialP__SerialFrameComm__delimiterReceived(void );


static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data);



static inline bool SerialP__valid_rx_proto(uint8_t proto);










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
#line 519
static void SerialP__MaybeScheduleTx(void );










static inline error_t SerialP__SendBytePacket__completeSend(void );








static inline error_t SerialP__SendBytePacket__startSend(uint8_t b);
#line 560
static inline void SerialP__RunTx__runTask(void );
#line 669
static inline void SerialP__SerialFrameComm__putDone(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 100 "../../tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 51 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fbb47b68110, 
# 96 "../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 50 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fbb47b69570, 
# 71 "../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 54 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fbb47b674d0, 
# 31 "../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 54 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fbb47b674d0);
# 23 "../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 54 "../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fbb47b674d0, 
# 23 "../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 71 "../../tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 158 "../../tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4406 {
#line 158
  SerialDispatcherP__0__signalSendDone = 20U
};
#line 158
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 275
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4407 {
#line 275
  SerialDispatcherP__0__receiveTask = 21U
};
#line 275
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 66
#line 62
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4408 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4409 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 74
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4410 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
#line 158
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
#line 178
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
#line 194
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );
#line 244
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
#line 275
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
#line 296
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
#line 358
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "../../tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 94 "../../tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
#line 85
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
# 59 "../../tos/lib/serial/HdlcTranslateC.nc"
#line 56
typedef struct HdlcTranslateC____nesc_unnamed4411 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void );





static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data);
#line 98
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );







static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
#line 118
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);
#line 132
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 95 "../../tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void );
# 79 "../../tos/interfaces/UartStream.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte);
#line 99
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 42 "../../tos/chips/atm128/HplAtm128Uart.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void );
#line 40
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void );
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void );

static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void );


static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data);
# 95 "../../tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void );
# 62 "../../tos/chips/atm128/Atm128UartP.nc"
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len;
#line 62
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len;
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;
#line 63
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos;
#line 64
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr;

static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );







static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );
#line 93
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
#line 133
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 155
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len);
#line 173
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
#line 231
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "../../tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart0__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart0__txDone(void );

static void HplAtm128UartP__HplUart1__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__txDone(void );
# 60 "../../tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 52 "../../tos/interfaces/McuPowerState.nc"
static void HplAtm128UartP__McuPowerState__update(void );
# 130 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0Init__init(void );
#line 150
static inline error_t HplAtm128UartP__Uart0TxControl__start(void );





static inline error_t HplAtm128UartP__Uart0TxControl__stop(void );





static inline error_t HplAtm128UartP__Uart0RxControl__start(void );





static inline error_t HplAtm128UartP__Uart0RxControl__stop(void );





static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void );





static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void );
#line 207
static void HplAtm128UartP__HplUart0__tx(uint8_t data);






void __vector_25(void ) __attribute((signal))   ;





void __vector_27(void ) __attribute((interrupt))   ;



static inline error_t HplAtm128UartP__Uart1Init__init(void );
#line 308
void __vector_36(void ) __attribute((signal))   ;




void __vector_38(void ) __attribute((interrupt))   ;





static inline void HplAtm128UartP__HplUart1__default__txDone(void );
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer3P__CompareA__fired(void );
# 60 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm1281Timer3P__Capture__captured(HplAtm1281Timer3P__Capture__size_type t);
# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer3P__CompareB__fired(void );
#line 58
static void HplAtm1281Timer3P__CompareC__fired(void );
# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer3P__Timer__overflow(void );
# 93 "../../tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__Timer__set(uint16_t t);








static inline void HplAtm1281Timer3P__Timer__setScale(uint8_t s);










static inline uint8_t HplAtm1281Timer3P__TimerCtrl__getControlB(void );
#line 126
static inline void HplAtm1281Timer3P__TimerCtrl__setControlB(uint8_t x);
#line 164
static inline void HplAtm1281Timer3P__Timer__start(void );
#line 219
static inline uint16_t HplAtm1281Timer3P__Capture__get(void );





static inline void HplAtm1281Timer3P__CompareA__default__fired(void );
void __vector_32(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer3P__CompareB__default__fired(void );
void __vector_33(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer3P__CompareC__default__fired(void );
void __vector_34(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer3P__Capture__default__captured(uint16_t time);
void __vector_31(void ) __attribute((interrupt))   ;



void __vector_35(void ) __attribute((interrupt))   ;
# 104 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__setScale(uint8_t scale);
#line 67
static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__timer_size t);










static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__start(void );
# 51 "../../tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__1__Init__init(void );








static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__overflow(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__overflow(void );
# 65 "../../tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__overflow(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__2__Counter__overflow(void );
# 67 "../../tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.Transform32*/TransformCounterC__2__upper_count_type /*CounterMicro32C.Transform32*/TransformCounterC__2__m_upper;

enum /*CounterMicro32C.Transform32*/TransformCounterC__2____nesc_unnamed4412 {

  TransformCounterC__2__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__2__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__2__from_size_type ) - /*CounterMicro32C.Transform32*/TransformCounterC__2__LOW_SHIFT_RIGHT, 
  TransformCounterC__2__NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__2__to_size_type ) - 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__2__from_size_type ) + 0, 



  TransformCounterC__2__OVERFLOW_MASK = /*CounterMicro32C.Transform32*/TransformCounterC__2__NUM_UPPER_BITS ? ((/*CounterMicro32C.Transform32*/TransformCounterC__2__upper_count_type )2 << (/*CounterMicro32C.Transform32*/TransformCounterC__2__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 133
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__2__CounterFrom__overflow(void );
# 51 "../../tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
# 48 "../../tos/system/QueueC.nc"
/*PrintfC.QueueC*/QueueC__0__queue_t  /*PrintfC.QueueC*/QueueC__0__queue[250];
uint8_t /*PrintfC.QueueC*/QueueC__0__head = 0;
uint8_t /*PrintfC.QueueC*/QueueC__0__tail = 0;
uint8_t /*PrintfC.QueueC*/QueueC__0__size = 0;

static inline bool /*PrintfC.QueueC*/QueueC__0__Queue__empty(void );







static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__size(void );



static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__maxSize(void );



static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__head(void );



static inline void /*PrintfC.QueueC*/QueueC__0__printQueue(void );
#line 89
static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 101
static inline error_t /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(/*PrintfC.QueueC*/QueueC__0__queue_t newVal);
# 97 "../../tos/interfaces/Queue.nc"
static error_t PrintfP__Queue__enqueue(
#line 93
PrintfP__Queue__t  newVal);
#line 88
static 
#line 86
PrintfP__Queue__t  

PrintfP__Queue__dequeue(void );
#line 50
static bool PrintfP__Queue__empty(void );
#line 65
static uint8_t PrintfP__Queue__size(void );
# 80 "../../tos/interfaces/AMSend.nc"
static error_t PrintfP__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 126 "../../tos/interfaces/Packet.nc"
static 
#line 123
void * 


PrintfP__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t PrintfP__retrySend__postTask(void );
# 114 "../../tos/lib/printf/PrintfP.nc"
enum PrintfP____nesc_unnamed4413 {
#line 114
  PrintfP__retrySend = 22U
};
#line 114
typedef int PrintfP____nesc_sillytask_retrySend[PrintfP__retrySend];
#line 101
enum PrintfP____nesc_unnamed4414 {
  PrintfP__S_STARTED, 
  PrintfP__S_FLUSHING
};

message_t PrintfP__printfMsg;
uint8_t PrintfP__state = PrintfP__S_STARTED;

static inline error_t PrintfP__Init__init(void );




static inline void PrintfP__retrySend__runTask(void );




static void PrintfP__sendNext(void );










int printfflush(void )   ;
#line 142
static void PrintfP__AMSend__sendDone(message_t *msg, error_t error);









static inline int PrintfP__Putchar__putchar(int c);
# 49 "../../tos/lib/printf/Putchar.nc"
static int PutcharP__Putchar__putchar(int c);
# 98 "../../tos/lib/printf/PutcharP.nc"
static inline error_t PutcharP__Init__init(void );
#line 110
int uart_putchar(char c, FILE *stream) __attribute((noinline))   ;
# 104 "../../tos/interfaces/SplitControl.nc"
static error_t SerialStartP__SerialControl__start(void );
# 44 "../../tos/lib/printf/SerialStartP.nc"
static inline void SerialStartP__Boot__booted(void );



static inline void SerialStartP__SerialControl__startDone(error_t error);
static inline void SerialStartP__SerialControl__stopDone(error_t error);
# 73 "../../tos/lib/timer/Timer.nc"
static void /*MCCC.TXFlow1.TXF*/TXFlowP__0__SendTimer__startOneShot(uint32_t dt);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*MCCC.TXFlow1.TXF*/TXFlowP__0__send__postTask(void );
# 126 "../../tos/interfaces/Packet.nc"
static 
#line 123
void * 


/*MCCC.TXFlow1.TXF*/TXFlowP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 75 "../../tos/interfaces/Send.nc"
static error_t /*MCCC.TXFlow1.TXF*/TXFlowP__0__AppSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 27 "TXFlowP.nc"
enum /*MCCC.TXFlow1.TXF*/TXFlowP__0____nesc_unnamed4415 {
#line 27
  TXFlowP__0__send = 23U
};
#line 27
typedef int /*MCCC.TXFlow1.TXF*/TXFlowP__0____nesc_sillytask_send[/*MCCC.TXFlow1.TXF*/TXFlowP__0__send];
#line 22
uint8_t /*MCCC.TXFlow1.TXF*/TXFlowP__0__packetsSent;
message_t /*MCCC.TXFlow1.TXF*/TXFlowP__0__packet;
bool /*MCCC.TXFlow1.TXF*/TXFlowP__0__busy = FALSE;








static inline void /*MCCC.TXFlow1.TXF*/TXFlowP__0__setup_mcc_app_packet(mccpacket *mccpkt);
#line 48
static inline uint32_t /*MCCC.TXFlow1.TXF*/TXFlowP__0__ms_timer(void );



static inline void /*MCCC.TXFlow1.TXF*/TXFlowP__0__Boot__booted(void );








static inline void /*MCCC.TXFlow1.TXF*/TXFlowP__0__SendTimer__fired(void );






static inline void /*MCCC.TXFlow1.TXF*/TXFlowP__0__send__runTask(void );
#line 83
static inline void /*MCCC.TXFlow1.TXF*/TXFlowP__0__AppSend__sendDone(message_t *msg, error_t error);
# 73 "../../tos/lib/timer/Timer.nc"
static void /*MCCC.TXFlow2.TXF*/TXFlowP__1__SendTimer__startOneShot(uint32_t dt);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*MCCC.TXFlow2.TXF*/TXFlowP__1__send__postTask(void );
# 126 "../../tos/interfaces/Packet.nc"
static 
#line 123
void * 


/*MCCC.TXFlow2.TXF*/TXFlowP__1__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 75 "../../tos/interfaces/Send.nc"
static error_t /*MCCC.TXFlow2.TXF*/TXFlowP__1__AppSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 27 "TXFlowP.nc"
enum /*MCCC.TXFlow2.TXF*/TXFlowP__1____nesc_unnamed4416 {
#line 27
  TXFlowP__1__send = 24U
};
#line 27
typedef int /*MCCC.TXFlow2.TXF*/TXFlowP__1____nesc_sillytask_send[/*MCCC.TXFlow2.TXF*/TXFlowP__1__send];
#line 22
uint8_t /*MCCC.TXFlow2.TXF*/TXFlowP__1__packetsSent;
message_t /*MCCC.TXFlow2.TXF*/TXFlowP__1__packet;
bool /*MCCC.TXFlow2.TXF*/TXFlowP__1__busy = FALSE;








static inline void /*MCCC.TXFlow2.TXF*/TXFlowP__1__setup_mcc_app_packet(mccpacket *mccpkt);
#line 48
static inline uint32_t /*MCCC.TXFlow2.TXF*/TXFlowP__1__ms_timer(void );



static inline void /*MCCC.TXFlow2.TXF*/TXFlowP__1__Boot__booted(void );








static inline void /*MCCC.TXFlow2.TXF*/TXFlowP__1__SendTimer__fired(void );






static inline void /*MCCC.TXFlow2.TXF*/TXFlowP__1__send__runTask(void );
#line 83
static inline void /*MCCC.TXFlow2.TXF*/TXFlowP__1__AppSend__sendDone(message_t *msg, error_t error);
# 94 "../../tos/chips/atm1281/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 94
{
   __asm volatile ("cli" :  :  : "memory");}

#line 111
#line 110
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 114
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 120
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 447 "/usr/lib/gcc/avr/4.9.4/../../../../avr/include/avr/wdt.h" 3
#line 445
static __inline 
__attribute((__always_inline__)) 
void wdt_disable(void )
{
  if ((uint16_t )& * (volatile uint8_t *)0x60 < 0x40 + 0x20) 
    {
      register uint8_t temp_reg;

#line 452
       __asm volatile (
      "in __tmp_reg__,__SREG__""\n\t"
      "cli""\n\t"
      "wdr""\n\t"
      "in  %[TEMPREG],%[WDTREG]""\n\t"
      "ori %[TEMPREG],%[WDCE_WDE]""\n\t"
      "out %[WDTREG],%[TEMPREG]""\n\t"
      "out %[WDTREG],__zero_reg__""\n\t"
      "out __SREG__,__tmp_reg__""\n\t" : 
      [TEMPREG] "=d"(temp_reg) : 
      [WDTREG] "I"((uint16_t )& * (volatile uint8_t *)0x60 - 0x20), 
      [WDCE_WDE] "n"((uint8_t )((1 << 4) | (1 << 3))) : 
      "r0");}
  else 


    {
      register uint8_t temp_reg;

#line 470
       __asm volatile (
      "in __tmp_reg__,__SREG__""\n\t"
      "cli""\n\t"
      "wdr""\n\t"
      "lds %[TEMPREG],%[WDTREG]""\n\t"
      "ori %[TEMPREG],%[WDCE_WDE]""\n\t"
      "sts %[WDTREG],%[TEMPREG]""\n\t"
      "sts %[WDTREG],__zero_reg__""\n\t"
      "out __SREG__,__tmp_reg__""\n\t" : 
      [TEMPREG] "=d"(temp_reg) : 
      [WDTREG] "n"((uint16_t )& * (volatile uint8_t *)0x60), 
      [WDCE_WDE] "n"((uint8_t )((1 << 4) | (1 << 3))) : 
      "r0");}
}

# 124 "../../tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "../../tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 70 "../../tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 126 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__TimerCtrl__setControlB(uint8_t x)
#line 126
{
  * (volatile uint8_t *)0x81 = x;
}

#line 113
static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getControlB(void )
#line 113
{
  return * (volatile uint8_t *)0x81;
}

#line 102
static inline void HplAtm1281Timer1P__Timer__setScale(uint8_t s)
#line 102
{
  Atm128_TCCRB_t x = (Atm128_TCCRB_t )HplAtm1281Timer1P__TimerCtrl__getControlB();

#line 104
  x.bits.cs = s;
  HplAtm1281Timer1P__TimerCtrl__setControlB(x.flat);
}

# 104 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale){
#line 104
  HplAtm1281Timer1P__Timer__setScale(scale);
#line 104
}
#line 104
# 164 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Timer__start(void )
#line 164
{
#line 164
  * (volatile uint8_t *)0x6F |= 1 << 0;
}

# 78 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void ){
#line 78
  HplAtm1281Timer1P__Timer__start();
#line 78
}
#line 78
# 93 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Timer__set(uint16_t t)
#line 93
{
#line 93
  * (volatile uint16_t *)0x84 = t;
}

# 67 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t){
#line 67
  HplAtm1281Timer1P__Timer__set(t);
#line 67
}
#line 67
# 51 "../../tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(0);
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start();
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(2);
  }
  return SUCCESS;
}

# 126 "../../tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__TimerCtrl__setControlB(uint8_t x)
#line 126
{
  * (volatile uint8_t *)0x91 = x;
}

#line 113
static inline uint8_t HplAtm1281Timer3P__TimerCtrl__getControlB(void )
#line 113
{
  return * (volatile uint8_t *)0x91;
}

#line 102
static inline void HplAtm1281Timer3P__Timer__setScale(uint8_t s)
#line 102
{
  Atm128_TCCRB_t x = (Atm128_TCCRB_t )HplAtm1281Timer3P__TimerCtrl__getControlB();

#line 104
  x.bits.cs = s;
  HplAtm1281Timer3P__TimerCtrl__setControlB(x.flat);
}

# 104 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__setScale(uint8_t scale){
#line 104
  HplAtm1281Timer3P__Timer__setScale(scale);
#line 104
}
#line 104
# 164 "../../tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__Timer__start(void )
#line 164
{
#line 164
  * (volatile uint8_t *)0x71 |= 1 << 0;
}

# 78 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__start(void ){
#line 78
  HplAtm1281Timer3P__Timer__start();
#line 78
}
#line 78
# 93 "../../tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__Timer__set(uint16_t t)
#line 93
{
#line 93
  * (volatile uint16_t *)0x94 = t;
}

# 67 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__timer_size t){
#line 67
  HplAtm1281Timer3P__Timer__set(t);
#line 67
}
#line 67
# 51 "../../tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__1__Init__init(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__set(0);
    /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__start();
    /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__setScale(2);
  }
  return SUCCESS;
}

# 62 "../../tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*InitThreeP.InitThree*/Atm128TimerInitC__1__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 56 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 4);
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr();
#line 41
}
#line 41
# 59 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )33U &= ~(1 << 4);
}

# 44 "../../tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput();
#line 44
}
#line 44
# 49 "../../tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 49
{

  * (volatile uint8_t *)(0x08 + 0x20) = 0;
  * (volatile uint8_t *)(0x07 + 0x20) = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 55 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 0;
}

# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 40
}
#line 40
# 55 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 1;
}

# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 40
}
#line 40
# 55 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 2;
}

# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 40
}
#line 40
# 61 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 0;
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 46
}
#line 46
# 61 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 1;
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 46
}
#line 46
# 61 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 2;
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 46
}
#line 46
# 56 "../../tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "../../tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, MotePlatformP__PlatformInit__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 75 "../../tos/platforms/iris/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 75
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 81
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)0x81 = 1 << 0;
    * (volatile uint8_t *)0xB6 = 1 << 5;
    * (volatile uint8_t *)0xB1 = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)0x84;
    for (wraps = MeasureClockC__MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)0x84;

        if (next < start) {
          wraps--;
          }
#line 99
        start = next;
      }


    now = * (volatile uint8_t *)0xB2;
    while (* (volatile uint8_t *)0xB2 == now) ;


    start = * (volatile uint16_t *)0x84;
    now = * (volatile uint8_t *)0xB2;
    while (* (volatile uint8_t *)0xB2 == now) ;
    MeasureClockC__cycles = * (volatile uint16_t *)0x84;

    MeasureClockC__cycles = (MeasureClockC__cycles - start + 16) >> 5;


    * (volatile uint8_t *)0xB6 = * (volatile uint8_t *)0x81 = * (volatile uint8_t *)0xB1 = 0;
    * (volatile uint8_t *)0xB2 = 0;
    * (volatile uint16_t *)0x84 = 0;
    * (volatile uint8_t *)(0x16 + 0x20) = * (volatile uint8_t *)(0x17 + 0x20) = 0xff;
    while (* (volatile uint8_t *)0xB6 & (((1 << 4) | (1 << 2)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 62 "../../tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "../../tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  return ok;
}

# 55 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 6;
}

# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__RSTN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set();
#line 40
}
#line 40
# 61 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 6;
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__RSTN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput();
#line 46
}
#line 46
# 56 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )37U &= ~(1 << 7);
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SLP_TR__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr();
#line 41
}
#line 41
# 61 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )36U |= 1 << 7;
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SLP_TR__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput();
#line 46
}
#line 46
# 55 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )37U |= 1 << 0;
}

# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SELN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 40
}
#line 40
# 61 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )36U |= 1 << 0;
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SELN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 218 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline error_t RF230DriverLayerP__PlatformInit__init(void )
{
  RF230DriverLayerP__SELN__makeOutput();
  RF230DriverLayerP__SELN__set();
  RF230DriverLayerP__SLP_TR__makeOutput();
  RF230DriverLayerP__SLP_TR__clr();
  RF230DriverLayerP__RSTN__makeOutput();
  RF230DriverLayerP__RSTN__set();

  RF230DriverLayerP__rxMsg = &RF230DriverLayerP__rxMsgBuffer;


  RF230DriverLayerP__rssiClear = 0;
  RF230DriverLayerP__rssiBusy = 90;

  return SUCCESS;
}

# 171 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__stop(void )
#line 171
{
#line 171
  * (volatile uint8_t *)0x6F &= ~(1 << 5);
}

# 70 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__stop(void ){
#line 70
  HplAtm1281Timer1P__Capture__stop();
#line 70
}
#line 70
# 56 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )43U &= ~(1 << 4);
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortIRQ__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr();
#line 41
}
#line 41
# 59 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )42U &= ~(1 << 4);
}

# 44 "../../tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortIRQ__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput();
#line 44
}
#line 44
# 56 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )43U &= ~(1 << 6);
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortCLKM__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr();
#line 41
}
#line 41
# 59 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )42U &= ~(1 << 6);
}

# 44 "../../tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortCLKM__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput();
#line 44
}
#line 44
# 53 "../../tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline error_t HplRF230P__PlatformInit__init(void )
{
  HplRF230P__PortCLKM__makeInput();
  HplRF230P__PortCLKM__clr();
  HplRF230P__PortIRQ__makeInput();
  HplRF230P__PortIRQ__clr();
  HplRF230P__Capture__stop();

  return SUCCESS;
}

# 62 "../../tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplRF230P__PlatformInit__init();
#line 62
  __nesc_result = ecombine(__nesc_result, RF230DriverLayerP__PlatformInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PlatformP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "../../tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 281 "/home/jharbin/nesc-install/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 75 "../../tos/interfaces/Send.nc"
inline static error_t /*MCCC.TXFlow2.TXF*/TXFlowP__1__AppSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = MCCP__FlowSend__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 286 "/home/jharbin/nesc-install/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

# 33 "TXFlowP.nc"
static inline void /*MCCC.TXFlow2.TXF*/TXFlowP__1__setup_mcc_app_packet(mccpacket *mccpkt)
#line 33
{
  do {
#line 34
      if (0) {
#line 34
        printf("APP: Setting up MCC packet fields\n");
        }
    }
  while (
#line 34
  0);
  mccpkt->crit_level = 0;
  __nesc_hton_uint8(mccpkt->flow_id.nxdata, 2);
  __nesc_hton_uint8(mccpkt->priority.nxdata, 1);
  __nesc_hton_uint8(mccpkt->c.nxdata, 1);
  __nesc_hton_uint8(mccpkt->src.nxdata, TOS_NODE_ID);
  __nesc_hton_uint8(mccpkt->dst.nxdata, 0);
  __nesc_hton_uint8(mccpkt->hop_src.nxdata, TOS_NODE_ID);
  __nesc_hton_uint8(mccpkt->hop_dst.nxdata, 0);
  __nesc_hton_uint8(mccpkt->burst_num.nxdata, 0);
  __nesc_hton_uint8(mccpkt->seq_num.nxdata, /*MCCC.TXFlow2.TXF*/TXFlowP__1__packetsSent);
  do {
#line 45
      if (0) {
#line 45
        printf("MCC packet src = %u, prio = %u, destination = %u\n", __nesc_ntoh_uint8(mccpkt->src.nxdata), __nesc_ntoh_uint8(mccpkt->priority.nxdata), __nesc_ntoh_uint8(mccpkt->dst.nxdata));
        }
    }
  while (
#line 45
  0);
}

# 126 "../../tos/interfaces/Packet.nc"
inline static void * /*MCCC.TXFlow2.TXF*/TXFlowP__1__Packet__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 68 "TXFlowP.nc"
static inline void /*MCCC.TXFlow2.TXF*/TXFlowP__1__send__runTask(void )
#line 68
{


  mccpacket *mccpkt;

#line 72
  mccpkt = (mccpacket *)/*MCCC.TXFlow2.TXF*/TXFlowP__1__Packet__getPayload(&/*MCCC.TXFlow2.TXF*/TXFlowP__1__packet, sizeof(mccpacket ));
  /*MCCC.TXFlow2.TXF*/TXFlowP__1__setup_mcc_app_packet(mccpkt);
  do {
#line 74
      if (0) {
#line 74
        printf("TXFlowP.send flow %u: seq_num = %u\n", 2, __nesc_ntoh_uint8(mccpkt->seq_num.nxdata));
        }
    }
  while (
#line 74
  0);
  if (/*MCCC.TXFlow2.TXF*/TXFlowP__1__AppSend__send(&/*MCCC.TXFlow2.TXF*/TXFlowP__1__packet, sizeof(mccpacket )) == SUCCESS) {
      /*MCCC.TXFlow2.TXF*/TXFlowP__1__busy = TRUE;
      do {
#line 77
          if (0) {
#line 77
            printf("TXFlowP: Pkt passed to APP\n");
            }
        }
      while (
#line 77
      0);
    }
  else 
#line 78
    {
      do {
#line 79
          if (0) {
#line 79
            printf("TXFlowP: Packet failed\n");
            }
        }
      while (
#line 79
      0);
    }
}

# 64 "../../tos/lib/timer/Counter.nc"
inline static /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 53 "../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__get(void )
{
  return /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__get();
}

# 61 "../../tos/lib/timer/LocalTime.nc"
inline static uint32_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__LocalTime__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 133 "../../tos/lib/ftsp/TimeSyncP.nc"
static inline uint32_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__GlobalTime__getLocalTime(void )
{
  return /*TimeSyncC.TimeSyncP*/TimeSyncP__0__LocalTime__get();
}

# 42 "../../tos/lib/ftsp/GlobalTime.nc"
inline static uint32_t TdmaMacP__GlobalTime__getLocalTime(void ){
#line 42
  unsigned long __nesc_result;
#line 42

#line 42
  __nesc_result = /*TimeSyncC.TimeSyncP*/TimeSyncP__0__GlobalTime__getLocalTime();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 280 "TdmaMacP.nc"
static inline void TdmaMacP__mcc_printf(mccpacket *pkt)
#line 280
{
  do {
#line 281
      if (0) {
#line 281
        printf("MCC packet src %u, dst %u, flow %u, prio %u, seq %u, burst %u, rtx %u\n", __nesc_ntoh_uint8(pkt->src.nxdata), __nesc_ntoh_uint8(pkt->dst.nxdata), __nesc_ntoh_uint8(pkt->flow_id.nxdata), __nesc_ntoh_uint8(pkt->priority.nxdata), __nesc_ntoh_uint8(pkt->seq_num.nxdata), __nesc_ntoh_uint8(pkt->burst_num.nxdata), __nesc_ntoh_uint8(pkt->local_retransmits.nxdata));
        }
    }
  while (
#line 281
  0);
}

# 126 "../../tos/interfaces/Packet.nc"
inline static void * TdmaMacP__Packet__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 777 "TdmaMacP.nc"
static inline error_t TdmaMacP__MacSend__send(message_t *msg, uint8_t len)
#line 777
{
  uint32_t injectTime;
  uint8_t c_count_lim;
  uint8_t c_count;
  uint8_t base_seq_num;
  error_t res;
  error_t loop_res;

  mccpacket *packetToEnqueue = (mccpacket *)TdmaMacP__Packet__getPayload(msg, sizeof(mccpacket ));


  c_count_lim = __nesc_ntoh_uint8(packetToEnqueue->c.nxdata);
  if (c_count_lim > 3) {
#line 789
    c_count_lim = 3;
    }
#line 790
  if (c_count_lim < 0) {
#line 790
    c_count_lim = 1;
    }

  do {
#line 793
      if (0) {
#line 793
        printf("MacSend.send: APP message inside MAC enqueues %u frames\n", c_count_lim);
        }
    }
  while (
#line 793
  0);
  TdmaMacP__mcc_printf(packetToEnqueue);


  res = SUCCESS;
  base_seq_num = __nesc_ntoh_uint8(packetToEnqueue->seq_num.nxdata);


  if (TdmaMacP__hiCritMode == TRUE && packetToEnqueue->crit_level == LO) {

      do {
#line 803
          if (0) {
#line 803
            printf("Discarded LO messages since HI crit mode\n");
            }
        }
      while (
#line 803
      0);



      if (__nesc_ntoh_uint8(packetToEnqueue->priority.nxdata) == 1) {
#line 807
          TdmaMacP__discarded[0] += __nesc_ntoh_uint8(packetToEnqueue->c.nxdata);
        }
#line 808
      if (__nesc_ntoh_uint8(packetToEnqueue->priority.nxdata) == 2) {
#line 808
          TdmaMacP__discarded[1] += __nesc_ntoh_uint8(packetToEnqueue->c.nxdata);
        }
#line 809
      if (__nesc_ntoh_uint8(packetToEnqueue->priority.nxdata) == 3) {
#line 809
          TdmaMacP__discarded[2] += __nesc_ntoh_uint8(packetToEnqueue->c.nxdata);
        }
    }
  else 
#line 811
    {



      for (c_count = 0; c_count < c_count_lim; c_count = c_count + 1) {

          __nesc_hton_uint8(packetToEnqueue->burst_num.nxdata, c_count);
          __nesc_hton_uint8(packetToEnqueue->seq_num.nxdata, base_seq_num + c_count);
          do {
#line 819
              if (0) {
#line 819
                printf("MacSend.send: c_count = %u\n", c_count);
                }
            }
          while (
#line 819
          0);

          injectTime = TdmaMacP__GlobalTime__getLocalTime();

          loop_res = TdmaMacP__mcc_enqueue_to_buffers(packetToEnqueue, injectTime);
          if (loop_res != SUCCESS) {
              res = loop_res;
            }
        }
    }



  return res;
}

# 75 "../../tos/interfaces/Send.nc"
inline static error_t MCCP__MacSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = TdmaMacP__MacSend__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 154 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag(void )
#line 154
{
  return * (volatile uint8_t *)(0x17 + 0x20);
}

# 89 "../../tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void ){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag();
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 33 "PrioCritQueue.nc"
inline static uint8_t TdmaMacP__forwardQueue__sizePrio(uint8_t prio){
#line 33
  unsigned char __nesc_result;
#line 33

#line 33
  __nesc_result = /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__sizePrio(prio);
#line 33

#line 33
  return __nesc_result;
#line 33
}
#line 33
# 73 "../../tos/system/QueueC.nc"
static inline void /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__printQueue(void )
#line 73
{
}

#line 65
static inline uint8_t /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__maxSize(void )
#line 65
{
  return 20;
}

#line 61
static inline uint8_t /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__size(void )
#line 61
{
  return /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__size;
}

#line 101
static inline error_t /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__enqueue(/*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__queue_t newVal)
#line 101
{
  if (/*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__size() < /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__maxSize()) {
      ;
      /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__queue[/*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__tail] = newVal;
      /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__tail++;
      if (/*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__tail == 20) {
#line 106
        /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__tail = 0;
        }
#line 107
      /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__size++;
      /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 97 "../../tos/interfaces/Queue.nc"
inline static error_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__enqueue(/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__t  newVal){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__enqueue(newVal);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 73 "../../tos/system/QueueC.nc"
static inline void /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__printQueue(void )
#line 73
{
}

#line 65
static inline uint8_t /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__maxSize(void )
#line 65
{
  return 20;
}

#line 61
static inline uint8_t /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__size(void )
#line 61
{
  return /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__size;
}

#line 101
static inline error_t /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__enqueue(/*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__queue_t newVal)
#line 101
{
  if (/*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__size() < /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__maxSize()) {
      ;
      /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__queue[/*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__tail] = newVal;
      /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__tail++;
      if (/*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__tail == 20) {
#line 106
        /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__tail = 0;
        }
#line 107
      /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__size++;
      /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 97 "../../tos/interfaces/Queue.nc"
inline static error_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__enqueue(/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__t  newVal){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__enqueue(newVal);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 73 "../../tos/system/QueueC.nc"
static inline void /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__printQueue(void )
#line 73
{
}

#line 65
static inline uint8_t /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__maxSize(void )
#line 65
{
  return 20;
}

#line 61
static inline uint8_t /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__size(void )
#line 61
{
  return /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__size;
}

#line 101
static inline error_t /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__enqueue(/*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__queue_t newVal)
#line 101
{
  if (/*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__size() < /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__maxSize()) {
      ;
      /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__queue[/*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__tail] = newVal;
      /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__tail++;
      if (/*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__tail == 20) {
#line 106
        /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__tail = 0;
        }
#line 107
      /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__size++;
      /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 97 "../../tos/interfaces/Queue.nc"
inline static error_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__enqueue(/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__t  newVal){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__enqueue(newVal);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 93 "PrioCritQueueP.nc"
static inline error_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__enqueue(/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__queue_t newVal, uint8_t prio)
#line 93
{
  switch (prio) {
      case 1: return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__enqueue(newVal);
      case 2: return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__enqueue(newVal);
      case 3: return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__enqueue(newVal);
      default: return FAIL;
    }
}

# 91 "PrioCritQueue.nc"
inline static error_t TdmaMacP__forwardQueue__enqueue(TdmaMacP__forwardQueue__t  newVal, uint8_t prio){
#line 91
  unsigned char __nesc_result;
#line 91

#line 91
  __nesc_result = /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__enqueue(newVal, prio);
#line 91

#line 91
  return __nesc_result;
#line 91
}
#line 91
# 83 "TXFlowP.nc"
static inline void /*MCCC.TXFlow2.TXF*/TXFlowP__1__AppSend__sendDone(message_t *msg, error_t error)
#line 83
{
  mccpacket *mccpkt;

#line 85
  if (&/*MCCC.TXFlow2.TXF*/TXFlowP__1__packet == msg) {

      mccpkt = (mccpacket *)/*MCCC.TXFlow2.TXF*/TXFlowP__1__Packet__getPayload(&/*MCCC.TXFlow2.TXF*/TXFlowP__1__packet, sizeof(mccpacket ));
      /*MCCC.TXFlow2.TXF*/TXFlowP__1__packetsSent += __nesc_ntoh_uint8(mccpkt->c.nxdata);
      /*MCCC.TXFlow2.TXF*/TXFlowP__1__busy = FALSE;
    }


  do {
#line 93
      if (0) {
#line 93
        printf("TXFlowP: Packets sent:%d\n", /*MCCC.TXFlow2.TXF*/TXFlowP__1__packetsSent);
        }
    }
  while (
#line 93
  0);
}

# 126 "../../tos/interfaces/Packet.nc"
inline static void * /*MCCC.TXFlow1.TXF*/TXFlowP__0__Packet__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 83 "TXFlowP.nc"
static inline void /*MCCC.TXFlow1.TXF*/TXFlowP__0__AppSend__sendDone(message_t *msg, error_t error)
#line 83
{
  mccpacket *mccpkt;

#line 85
  if (&/*MCCC.TXFlow1.TXF*/TXFlowP__0__packet == msg) {

      mccpkt = (mccpacket *)/*MCCC.TXFlow1.TXF*/TXFlowP__0__Packet__getPayload(&/*MCCC.TXFlow1.TXF*/TXFlowP__0__packet, sizeof(mccpacket ));
      /*MCCC.TXFlow1.TXF*/TXFlowP__0__packetsSent += __nesc_ntoh_uint8(mccpkt->c.nxdata);
      /*MCCC.TXFlow1.TXF*/TXFlowP__0__busy = FALSE;
    }


  do {
#line 93
      if (0) {
#line 93
        printf("TXFlowP: Packets sent:%d\n", /*MCCC.TXFlow1.TXF*/TXFlowP__0__packetsSent);
        }
    }
  while (
#line 93
  0);
}

# 100 "../../tos/interfaces/Send.nc"
inline static void MCCP__FlowSend__sendDone(message_t * msg, error_t error){
#line 100
  /*MCCC.TXFlow1.TXF*/TXFlowP__0__AppSend__sendDone(msg, error);
#line 100
  /*MCCC.TXFlow2.TXF*/TXFlowP__1__AppSend__sendDone(msg, error);
#line 100
}
#line 100
#line 75
inline static error_t /*MCCC.TXFlow1.TXF*/TXFlowP__0__AppSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = MCCP__FlowSend__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 33 "TXFlowP.nc"
static inline void /*MCCC.TXFlow1.TXF*/TXFlowP__0__setup_mcc_app_packet(mccpacket *mccpkt)
#line 33
{
  do {
#line 34
      if (0) {
#line 34
        printf("APP: Setting up MCC packet fields\n");
        }
    }
  while (
#line 34
  0);
  mccpkt->crit_level = 0;
  __nesc_hton_uint8(mccpkt->flow_id.nxdata, 1);
  __nesc_hton_uint8(mccpkt->priority.nxdata, 2);
  __nesc_hton_uint8(mccpkt->c.nxdata, 2);
  __nesc_hton_uint8(mccpkt->src.nxdata, TOS_NODE_ID);
  __nesc_hton_uint8(mccpkt->dst.nxdata, 2);
  __nesc_hton_uint8(mccpkt->hop_src.nxdata, TOS_NODE_ID);
  __nesc_hton_uint8(mccpkt->hop_dst.nxdata, 0);
  __nesc_hton_uint8(mccpkt->burst_num.nxdata, 0);
  __nesc_hton_uint8(mccpkt->seq_num.nxdata, /*MCCC.TXFlow1.TXF*/TXFlowP__0__packetsSent);
  do {
#line 45
      if (0) {
#line 45
        printf("MCC packet src = %u, prio = %u, destination = %u\n", __nesc_ntoh_uint8(mccpkt->src.nxdata), __nesc_ntoh_uint8(mccpkt->priority.nxdata), __nesc_ntoh_uint8(mccpkt->dst.nxdata));
        }
    }
  while (
#line 45
  0);
}

#line 68
static inline void /*MCCC.TXFlow1.TXF*/TXFlowP__0__send__runTask(void )
#line 68
{


  mccpacket *mccpkt;

#line 72
  mccpkt = (mccpacket *)/*MCCC.TXFlow1.TXF*/TXFlowP__0__Packet__getPayload(&/*MCCC.TXFlow1.TXF*/TXFlowP__0__packet, sizeof(mccpacket ));
  /*MCCC.TXFlow1.TXF*/TXFlowP__0__setup_mcc_app_packet(mccpkt);
  do {
#line 74
      if (0) {
#line 74
        printf("TXFlowP.send flow %u: seq_num = %u\n", 1, __nesc_ntoh_uint8(mccpkt->seq_num.nxdata));
        }
    }
  while (
#line 74
  0);
  if (/*MCCC.TXFlow1.TXF*/TXFlowP__0__AppSend__send(&/*MCCC.TXFlow1.TXF*/TXFlowP__0__packet, sizeof(mccpacket )) == SUCCESS) {
      /*MCCC.TXFlow1.TXF*/TXFlowP__0__busy = TRUE;
      do {
#line 77
          if (0) {
#line 77
            printf("TXFlowP: Pkt passed to APP\n");
            }
        }
      while (
#line 77
      0);
    }
  else 
#line 78
    {
      do {
#line 79
          if (0) {
#line 79
            printf("TXFlowP: Packet failed\n");
            }
        }
      while (
#line 79
      0);
    }
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t PrintfP__retrySend__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PrintfP__retrySend);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 80 "../../tos/interfaces/AMSend.nc"
inline static error_t PrintfP__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 114 "../../tos/lib/printf/PrintfP.nc"
static inline void PrintfP__retrySend__runTask(void )
#line 114
{
  if (PrintfP__AMSend__send(AM_BROADCAST_ADDR, &PrintfP__printfMsg, sizeof(printf_msg_t )) != SUCCESS) {
    PrintfP__retrySend__postTask();
    }
}

# 315 "/home/jharbin/nesc-install/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 60 "../../tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg)
#line 60
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 158
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
#line 158
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 160
  __nesc_hton_uint16(header->dest.nxdata, addr);
}

# 103 "../../tos/interfaces/AMPacket.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 177 "../../tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type)
#line 177
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 179
  __nesc_hton_uint8(header->type.nxdata, type);
}

# 162 "../../tos/interfaces/AMPacket.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(amsg, t);
#line 162
}
#line 162
# 80 "../../tos/interfaces/AMSend.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(am_id_t arg_0x7fbb47ddbb60, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(arg_0x7fbb47ddbb60, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 78 "../../tos/interfaces/AMPacket.nc"
inline static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 147
inline static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 127 "../../tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 127
{
  __nesc_hton_uint8(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg)->length.nxdata, len);
}

# 94 "../../tos/interfaces/Packet.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(msg, len);
#line 94
}
#line 94
# 90 "../../tos/system/AMQueueImplP.nc"
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[clientId].msg = msg;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__setPayloadLength(msg, len);

  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current >= 1) {
      error_t err;
      am_id_t amId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(msg);
      am_addr_t dest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(msg);

      ;
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = clientId;

      err = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = 1;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 75 "../../tos/interfaces/Send.nc"
inline static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 131 "../../tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
#line 131
{
  return 28;
}

# 539 "../../tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__startSend(uint8_t b)
#line 539
{
  bool not_busy = FALSE;

#line 541
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 541
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 543
          EOFF;

          {
#line 543
            __nesc_atomic_end(__nesc_atomic); 
#line 543
            return __nesc_temp;
          }
        }
    }
#line 546
    __nesc_atomic_end(__nesc_atomic); }
#line 545
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 545
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 551
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 62 "../../tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = SerialP__SendBytePacket__startSend(first_byte);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 54 "../../tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
#line 54
{
  return upperLen + sizeof(serial_header_t );
}

# 361 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 362
{
  return 0;
}

# 23 "../../tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x7fbb47b674d0, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x7fbb47b674d0) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x7fbb47b674d0, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 51 "../../tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
#line 51
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 358 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 358
{
  return 0;
}

# 15 "../../tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x7fbb47b674d0){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x7fbb47b674d0) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x7fbb47b674d0);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 111 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
#line 111
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 119
            ESIZE;

            {
#line 119
              __nesc_atomic_end(__nesc_atomic); 
#line 119
              return __nesc_temp;
            }
          }
        }
#line 122
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

# 75 "../../tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__RunTx__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 97 "../../tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 110 "../../tos/interfaces/AMSend.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  PrintfP__AMSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "../../tos/system/AMQueueEntryP.nc"
static inline void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(m, err);
}

# 215 "../../tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "../../tos/interfaces/Send.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(uint8_t arg_0x7fbb47ddc940, message_t * msg, error_t error){
#line 100
  switch (arg_0x7fbb47ddc940) {
#line 100
    case 0U:
#line 100
      /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(arg_0x7fbb47ddc940, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 163 "../../tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[last].msg = (void *)0;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend();
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(last, msg, err);
}

#line 189
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current >= 1) {
      return;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg == msg) {
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current, msg, err);
    }
  else {
      ;
    }
}

# 110 "../../tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x7fbb47cbde10, message_t * msg, error_t error){
#line 110
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(arg_0x7fbb47cbde10, msg, error);
#line 110
}
#line 110
# 101 "../../tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 101
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 376 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 376
{
  return;
}

# 100 "../../tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x7fbb47b68110, message_t * msg, error_t error){
#line 100
  switch (arg_0x7fbb47b68110) {
#line 100
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 100
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x7fbb47b68110, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 158 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
#line 158
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 162
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
#line 164
    error = ECANCEL;
    }
#line 165
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

# 65 "../../tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg == (void *)0 || 
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current / 8] & (1 << /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current % 8)) 
        {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 78
    /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = 1;
    }
}

# 122 "../../tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg)
#line 122
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

#line 124
  return __nesc_ntoh_uint8(header->length.nxdata);
}

# 78 "../../tos/interfaces/Packet.nc"
inline static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 126 "../../tos/interfaces/Packet.nc"
inline static void * PrintfP__Packet__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 73 "../../tos/system/QueueC.nc"
static inline void /*PrintfC.QueueC*/QueueC__0__printQueue(void )
#line 73
{
}

#line 53
static inline bool /*PrintfC.QueueC*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*PrintfC.QueueC*/QueueC__0__size == 0;
}

#line 69
static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__head(void )
#line 69
{
  return /*PrintfC.QueueC*/QueueC__0__queue[/*PrintfC.QueueC*/QueueC__0__head];
}

#line 89
static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__dequeue(void )
#line 89
{
  /*PrintfC.QueueC*/QueueC__0__queue_t t = /*PrintfC.QueueC*/QueueC__0__Queue__head();

#line 91
  ;
  if (!/*PrintfC.QueueC*/QueueC__0__Queue__empty()) {
      /*PrintfC.QueueC*/QueueC__0__head++;
      if (/*PrintfC.QueueC*/QueueC__0__head == 250) {
#line 94
        /*PrintfC.QueueC*/QueueC__0__head = 0;
        }
#line 95
      /*PrintfC.QueueC*/QueueC__0__size--;
      /*PrintfC.QueueC*/QueueC__0__printQueue();
    }
  return t;
}

# 88 "../../tos/interfaces/Queue.nc"
inline static PrintfP__Queue__t  PrintfP__Queue__dequeue(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__dequeue();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 212 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
#line 212
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

# 109 "../../tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 109
{
  return msg;
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x7fbb47cb9060, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x7fbb47cb9060, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 113 "../../tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 113
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

# 371 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 373
{
  return msg;
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x7fbb47b69570, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x7fbb47b69570) {
#line 78
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x7fbb47b69570, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 57 "../../tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
#line 57
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 365 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 366
{
  return 0;
}

# 31 "../../tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x7fbb47b674d0, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x7fbb47b674d0) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x7fbb47b674d0, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 275 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
#line 275
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 280
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
#line 285
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 289
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
#line 293
    __nesc_atomic_end(__nesc_atomic); }
}

# 49 "../../tos/lib/printf/SerialStartP.nc"
static inline void SerialStartP__SerialControl__stopDone(error_t error)
#line 49
{
}

# 138 "../../tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__stopDone(error_t error){
#line 138
  SerialStartP__SerialControl__stopDone(error);
#line 138
}
#line 138
# 161 "../../tos/chips/atm1281/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
#line 161
{
}

# 52 "../../tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 168 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__stop(void )
#line 168
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 4);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "../../tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0RxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 156 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__stop(void )
#line 156
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 3);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "../../tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0TxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 93 "../../tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void )
#line 93
{
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop();
  return SUCCESS;
}

# 105 "../../tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 336 "../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__flushDone(void )
#line 336
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static inline void SerialP__defaultSerialFlushTask__runTask(void )
#line 341
{
  SerialP__SerialFlush__flushDone();
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__defaultSerialFlushTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 344 "../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__default__flush(void )
#line 344
{
  SerialP__defaultSerialFlushTask__postTask();
}

# 49 "../../tos/lib/serial/SerialFlush.nc"
inline static void SerialP__SerialFlush__flush(void ){
#line 49
  SerialP__SerialFlush__default__flush();
#line 49
}
#line 49
# 332 "../../tos/lib/serial/SerialP.nc"
static inline void SerialP__stopDoneTask__runTask(void )
#line 332
{
  SerialP__SerialFlush__flush();
}

# 48 "../../tos/lib/printf/SerialStartP.nc"
static inline void SerialStartP__SerialControl__startDone(error_t error)
#line 48
{
}

# 113 "../../tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__startDone(error_t error){
#line 113
  SerialStartP__SerialControl__startDone(error);
#line 113
}
#line 113
# 185 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void )
#line 185
{
  * (volatile uint8_t *)0XC1 |= 1 << 7;
  return SUCCESS;
}

# 42 "../../tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplAtm128UartP__HplUart0__enableRxIntr();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 162 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__start(void )
#line 162
{
  * (volatile uint8_t *)0XC1 |= 1 << 4;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "../../tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0RxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 150 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__start(void )
#line 150
{
  * (volatile uint8_t *)0XC1 |= 1 << 3;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "../../tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0TxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 190 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void )
#line 190
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 7);
  return SUCCESS;
}

# 43 "../../tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = HplAtm128UartP__HplUart0__disableRxIntr();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 180 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void )
#line 180
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 6);
  return SUCCESS;
}

# 41 "../../tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = HplAtm128UartP__HplUart0__disableTxIntr();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 77 "../../tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void )
#line 77
{

  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start();


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr();
  return SUCCESS;
}

# 95 "../../tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 322 "../../tos/lib/serial/SerialP.nc"
static inline void SerialP__startDoneTask__runTask(void )
#line 322
{
  SerialP__SerialControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      SerialP__txState = SerialP__TXSTATE_IDLE;
      SerialP__rxState = SerialP__RXSTATE_NOSYNC;
    }
#line 327
    __nesc_atomic_end(__nesc_atomic); }
  SerialP__SplitControl__startDone(SUCCESS);
}

# 56 "../../tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putDelimiter(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = HdlcTranslateC__SerialFrameComm__putDelimiter();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 194 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
#line 194
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 195
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
#line 195
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

# 91 "../../tos/lib/serial/SendBytePacket.nc"
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
#line 91
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 91
}
#line 91
# 244 "../../tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_empty(void )
#line 244
{
  bool ret;

#line 246
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
#line 246
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP__ack_queue_top(void )
#line 260
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 262
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP__ack_queue_pop(void )
#line 270
{
  uint8_t retval = 0;

  /* atomic removed: atomic calls only */
#line 272
  {
    if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
        retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
        if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
#line 275
          SerialP__ackQ.readPtr = 0;
          }
      }
  }
#line 278
  return retval;
}

#line 560
static inline void SerialP__RunTx__runTask(void )
#line 560
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 577
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
#line 586
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 590
        {
          SerialP__txSeqno++;
          if (SerialP__txProto == SERIAL_PROTO_ACK) {
              SerialP__ack_queue_pop();
            }
          else {
              result = done ? SUCCESS : FAIL;
              send_completed = TRUE;
            }
        }
#line 599
        __nesc_atomic_end(__nesc_atomic); }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 606
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 606
        goInactive = SerialP__offPending;
#line 606
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 608
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
#line 608
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 614
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 614
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
#line 617
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 619
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();

                  SerialP__txProto = SERIAL_PROTO_ACK;
                  SerialP__txIndex = SerialP__TX_ACK_INDEX;
                  start_it = TRUE;
                }
#line 626
                __nesc_atomic_end(__nesc_atomic); }
            }
          else {
#line 628
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 629
                  {
                    SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                    SerialP__txIndex = SerialP__TX_DATA_INDEX;
                    start_it = TRUE;
                  }
#line 633
                  __nesc_atomic_end(__nesc_atomic); }
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 647
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
          SerialP__testOff();
          {
#line 650
            __nesc_atomic_end(__nesc_atomic); 
#line 650
            return;
          }
        }
    }
#line 653
    __nesc_atomic_end(__nesc_atomic); }
  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 656
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
#line 660
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 662
            SerialP__txState = SerialP__TXSTATE_ERROR;
#line 662
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__stopDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 174 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void )
#line 174
{
  * (volatile uint8_t *)0xC0 |= 1 << 6;
  * (volatile uint8_t *)0XC1 |= 1 << 6;
  return SUCCESS;
}

# 40 "../../tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void ){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtm128UartP__HplUart0__enableTxIntr();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 126 "../../tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[last].msg;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[last].msg = (void *)0;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[i] &= ~mask;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 169
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask(void )
#line 169
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current, /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg, FAIL);
}

# 110 "../../tos/interfaces/AMSend.nc"
inline static void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__SubAMSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "../../tos/system/AMQueueEntryP.nc"
static inline void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(m, err);
}

# 215 "../../tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "../../tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x7fbb47ddc940, message_t * msg, error_t error){
#line 100
  switch (arg_0x7fbb47ddc940) {
#line 100
    case 0U:
#line 100
      /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x7fbb47ddc940, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 126 "../../tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

# 181 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
static inline void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendRadio__default__sendDone(am_id_t id, message_t *msg, error_t error)
{
}

# 93 "../../tos/interfaces/TimeSyncAMSend.nc"
inline static void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendRadio__sendDone(am_id_t arg_0x7fbb47eb7c00, message_t *msg, error_t error){
#line 93
    /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendRadio__default__sendDone(arg_0x7fbb47eb7c00, msg, error);
#line 93
}
#line 93
# 310 "/home/jharbin/nesc-install/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 502 "../../tos/lib/ftsp/TimeSyncP.nc"
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncNotify__default__msg_sent(void )
#line 502
{
}

# 52 "../../tos/lib/ftsp/TimeSyncNotify.nc"
inline static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncNotify__msg_sent(void ){
#line 52
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncNotify__default__msg_sent();
#line 52
}
#line 52
# 59 "../../tos/system/NoLedsC.nc"
static inline void NoLedsC__Leds__led1Toggle(void )
#line 59
{
}

# 83 "../../tos/interfaces/Leds.nc"
inline static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Leds__led1Toggle(void ){
#line 83
  NoLedsC__Leds__led1Toggle();
#line 83
}
#line 83
# 389 "../../tos/lib/ftsp/TimeSyncP.nc"
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Send__sendDone(message_t *ptr, error_t error)
{
  unsigned char __nesc_temp49;
  unsigned char *__nesc_temp48;

#line 391
  if (ptr != &/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsgBuffer) {
    return;
    }
  if (error == SUCCESS) 
    {
      ++/*TimeSyncC.TimeSyncP*/TimeSyncP__0__heartBeats;
      /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Leds__led1Toggle();

      if (__nesc_ntoh_uint16(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->rootID.nxdata) == TOS_NODE_ID) {
        (__nesc_temp48 = /*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->seqNum.nxdata, __nesc_hton_uint8(__nesc_temp48, (__nesc_temp49 = __nesc_ntoh_uint8(__nesc_temp48) + 1)), __nesc_temp49);
        }
    }
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__state &= ~/*TimeSyncC.TimeSyncP*/TimeSyncP__0__STATE_SENDING;
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncNotify__msg_sent();
}

# 210 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
static inline void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendMilli__default__sendDone(am_id_t id, message_t *msg, error_t error)
{
}

# 93 "../../tos/interfaces/TimeSyncAMSend.nc"
inline static void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendMilli__sendDone(am_id_t arg_0x7fbb47eb1360, message_t *msg, error_t error){
#line 93
  switch (arg_0x7fbb47eb1360) {
#line 93
    case TIMESYNC_AM_FTSP:
#line 93
      /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Send__sendDone(msg, error);
#line 93
      break;
#line 93
    default:
#line 93
      /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendMilli__default__sendDone(arg_0x7fbb47eb1360, msg, error);
#line 93
      break;
#line 93
    }
#line 93
}
#line 93
# 169 "../../tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void )
#line 169
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current, /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg, FAIL);
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 80 "../../tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x7fbb47ddbb60, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(arg_0x7fbb47ddbb60, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 292 "/home/jharbin/nesc-install/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 292
{
  const uint8_t *base = source;

#line 294
  return base[0];
}

# 73 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__RF230DriverConfig__headerLength(message_t *msg)
{
  return (unsigned short )& ((message_t *)0)->data - sizeof(rf230packet_header_t );
}

# 40 "../../tos/chips/rf230/RF230DriverConfig.nc"
inline static uint8_t RF230DriverLayerP__Config__headerLength(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = RF230RadioP__RF230DriverConfig__headerLength(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 96 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline rf230_header_t *RF230DriverLayerP__getHeader(message_t *msg)
{
  return (void *)msg + RF230DriverLayerP__Config__headerLength(msg);
}

#line 896
static inline uint8_t RF230DriverLayerP__RadioPacket__payloadLength(message_t *msg)
{
  return __nesc_ntoh_leuint8(RF230DriverLayerP__getHeader(msg)->length.nxdata) - 2;
}

# 51 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(message_t *msg){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = RF230DriverLayerP__RadioPacket__payloadLength(msg);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 95 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(msg);
}

# 51 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(msg);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 121 "../../tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(msg);
}

# 51 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(msg);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 289 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(msg) - sizeof(ieee154_simple_header_t );
}

# 51 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(message_t *msg){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(msg);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 159 "../../tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg) - /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 51 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(msg);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 219 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(msg) - sizeof(activemessage_header_t );
}

#line 251
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(msg);
}

# 78 "../../tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 322 "/home/jharbin/nesc-install/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 322
{
  const uint8_t *base = source;

#line 324
  return ((uint16_t )base[1] << 8) | base[0];
}

# 180 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dest.nxdata);
}

# 141 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t RF230RadioP__Ieee154PacketLayer__getDestAddr(message_t *msg){
#line 141
  unsigned short __nesc_result;
#line 141

#line 141
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg);
#line 141

#line 141
  return __nesc_result;
#line 141
}
#line 141
# 173 "../../tos/chips/rf230/RF230RadioP.nc"
static inline am_addr_t RF230RadioP__ActiveMessageConfig__destination(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__getDestAddr(msg);
}

# 40 "../../tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(message_t *msg){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = RF230RadioP__ActiveMessageConfig__destination(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 168 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(msg);
}

# 78 "../../tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 188 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_id_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(message_t *msg)
{
  return __nesc_ntoh_uint8(/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(msg)->type.nxdata);
}

# 147 "../../tos/interfaces/AMPacket.nc"
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 65 "../../tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 78
    /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
    }
}

#line 174
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void )
#line 174
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(nextMsg);

#line 182
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask();
        }
    }
}

# 78 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__RF230DriverConfig__maxPayloadLength(void )
{
  return sizeof(rf230packet_header_t ) + 28;
}

# 46 "../../tos/chips/rf230/RF230DriverConfig.nc"
inline static uint8_t RF230DriverLayerP__Config__maxPayloadLength(void ){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = RF230RadioP__RF230DriverConfig__maxPayloadLength();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 910 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline uint8_t RF230DriverLayerP__RadioPacket__maxPayloadLength(void )
{
  for (; 0; ) ;

  return RF230DriverLayerP__Config__maxPayloadLength() - sizeof(rf230_header_t );
}

# 61 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = RF230DriverLayerP__RadioPacket__maxPayloadLength();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 105 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void )
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength();
}

# 61 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 131 "../../tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength();
}

# 61 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 299 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength() - sizeof(ieee154_simple_header_t );
}

# 61 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 169 "../../tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void )
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength() - /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 61 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 229 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength() - sizeof(activemessage_header_t );
}

#line 261
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void )
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength();
}

# 327 "/home/jharbin/nesc-install/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 327
{
  uint8_t *base = target;

#line 329
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 99 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg)
{

  __nesc_hton_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata, (__nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_PRESERVE)
   | /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE);
}

# 69 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__createDataFrame(message_t *msg){
#line 69
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(msg);
#line 69
}
#line 69
# 94 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_MASK) == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE;
}

# 63 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RF230RadioP__Ieee154PacketLayer__isDataFrame(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 203 "../../tos/chips/rf230/RF230RadioP.nc"
static inline error_t RF230RadioP__ActiveMessageConfig__checkFrame(message_t *msg)
{
  if (!RF230RadioP__Ieee154PacketLayer__isDataFrame(msg)) {
    RF230RadioP__Ieee154PacketLayer__createDataFrame(msg);
    }
  return SUCCESS;
}

# 63 "../../tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__checkFrame(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = RF230RadioP__ActiveMessageConfig__checkFrame(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 195 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->src.nxdata, addr);
}

# 156 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr){
#line 156
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(msg, addr);
#line 156
}
#line 156
# 188 "../../tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__ActiveMessageConfig__setSource(message_t *msg, am_addr_t addr)
{
  RF230RadioP__Ieee154PacketLayer__setSrcAddr(msg, addr);
}

# 49 "../../tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setSource(message_t *msg, am_addr_t addr){
#line 49
  RF230RadioP__ActiveMessageConfig__setSource(msg, addr);
#line 49
}
#line 49
# 183 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(message_t *msg, am_addr_t addr)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setSource(msg, addr);
}

# 175 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan)
{
  __nesc_hton_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->destpan.nxdata, pan);
}

# 136 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan){
#line 136
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(msg, pan);
#line 136
}
#line 136
# 198 "../../tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__ActiveMessageConfig__setGroup(message_t *msg, am_group_t grp)
{
  RF230RadioP__Ieee154PacketLayer__setDestPan(msg, grp);
}

# 55 "../../tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setGroup(message_t *msg, am_group_t grp){
#line 55
  RF230RadioP__ActiveMessageConfig__setGroup(msg, grp);
#line 55
}
#line 55
# 203 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(message_t *msg, am_group_t grp)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setGroup(msg, grp);
}

#line 118
static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(am_id_t id, am_addr_t addr, message_t *msg)
{
}

# 59 "../../tos/interfaces/SendNotifier.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__aboutToSend(am_id_t arg_0x7fbb48967450, am_addr_t dest, message_t * msg){
#line 59
    /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(arg_0x7fbb48967450, dest, msg);
#line 59
}
#line 59
# 64 "../../tos/system/FcfsResourceQueueC.nc"
static inline bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[id] != /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY || /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
        if (/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = id;
          }
        else {
#line 88
          /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail] = id;
          }
#line 89
        /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "../../tos/interfaces/ResourceQueue.nc"
inline static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 160 "../../tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 160
{
}

# 53 "../../tos/interfaces/ResourceRequested.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(uint8_t arg_0x7fbb488900d0){
#line 53
    /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(arg_0x7fbb488900d0);
#line 53
}
#line 53
# 70 "../../tos/system/SimpleArbiterP.nc"
static inline error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id)
#line 70
{
  /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 72
    {
      if (/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = id;
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 77
            SUCCESS;

            {
#line 77
              __nesc_atomic_end(__nesc_atomic); 
#line 77
              return __nesc_temp;
            }
          }
        }
#line 79
      {
        unsigned char __nesc_temp = 
#line 79
        /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(id);

        {
#line 79
          __nesc_atomic_end(__nesc_atomic); 
#line 79
          return __nesc_temp;
        }
      }
    }
#line 82
    __nesc_atomic_end(__nesc_atomic); }
}

# 88 "../../tos/interfaces/Resource.nc"
inline static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(0U);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
#line 120
inline static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(0U);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 49 "../../tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 164 "../../tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 164
{
}

# 59 "../../tos/interfaces/ResourceConfigure.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x7fbb4888f730){
#line 59
    /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x7fbb4888f730);
#line 59
}
#line 59
# 162 "../../tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 162
{
}

# 61 "../../tos/interfaces/ResourceRequested.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x7fbb488900d0){
#line 61
    /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x7fbb488900d0);
#line 61
}
#line 61
# 83 "../../tos/system/SimpleArbiterP.nc"
static inline error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 83
{
  /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 85
    {
      if (/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY;
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = id;
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
          {
            unsigned char __nesc_temp = 
#line 90
            SUCCESS;

            {
#line 90
              __nesc_atomic_end(__nesc_atomic); 
#line 90
              return __nesc_temp;
            }
          }
        }
#line 92
      {
        unsigned char __nesc_temp = 
#line 92
        FAIL;

        {
#line 92
          __nesc_atomic_end(__nesc_atomic); 
#line 92
          return __nesc_temp;
        }
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 97 "../../tos/interfaces/Resource.nc"
inline static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(0U);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 53 "../../tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(message_t *msg)
{
  if (/*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__immediateRequest() == SUCCESS) 
    {
      error_t result = /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(msg);

#line 58
      if (result != SUCCESS) {
        /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
        }
      return result;
    }

  /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending = msg;
  return /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__request();
}

# 49 "../../tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__send(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 79 "../../tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume(void ){
#line 79
  /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__resume();
#line 79
}
#line 79
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 98 "../../tos/lib/rfxlink/util/TaskletC.nc"
static __inline void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__suspend(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 100
    ++/*RF230RadioC.TaskletC*/TaskletC__0__state;
#line 100
    __nesc_atomic_end(__nesc_atomic); }
}

# 72 "../../tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend(void ){
#line 72
  /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__suspend();
#line 72
}
#line 72
# 230 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg)
{
  error_t result;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    result = EBUSY;
    }
  else {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg = msg;
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries = 0;
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
      result = SUCCESS;
    }

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return result;
}

# 49 "../../tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 297 "/home/jharbin/nesc-install/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 297
{
  uint8_t *base = target;

#line 299
  base[0] = value;
  return value;
}

# 165 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn)
{
  __nesc_hton_leuint8(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dsn.nxdata, dsn);
}

# 125 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn){
#line 125
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(msg, dsn);
#line 125
}
#line 125
# 154 "../../tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn)
{
  RF230RadioP__Ieee154PacketLayer__setDSN(msg, dsn);
}

# 52 "../../tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number){
#line 52
  RF230RadioP__UniqueConfig__setSequenceNumber(msg, number);
#line 52
}
#line 52
# 68 "../../tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg)
{
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(msg, ++/*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber);
  return /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(msg);
}

# 49 "../../tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t RF230DriverLayerP__releaseSpi__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(RF230DriverLayerP__releaseSpi);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 64 "../../tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready(void ){
#line 64
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready();
#line 64
}
#line 64
# 106 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
static __inline bool /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(uint8_t id)
{
  return /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
}

# 45 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
inline static bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(1U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 71 "../../tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void )
{
  if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY && /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) {
    /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready();
    }
}

# 64 "../../tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__ready(void ){
#line 64
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready();
#line 64
}
#line 64
# 72 "../../tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready(void )
{
  if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY) {
    /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__ready();
    }
}

# 64 "../../tos/lib/rfxlink/util/RadioSend.nc"
inline static void RF230DriverLayerP__RadioSend__ready(void ){
#line 64
  /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready();
#line 64
}
#line 64
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 163 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void )
{
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask();
}

# 70 "../../tos/lib/rfxlink/util/RadioState.nc"
inline static void RF230DriverLayerP__RadioState__done(void ){
#line 70
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done();
#line 70
}
#line 70
# 115 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline uint8_t HplAtm128SpiP__SPI__read(void )
#line 115
{
#line 115
  return * (volatile uint8_t *)(0X2E + 0x20);
}

# 97 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static uint8_t Atm128SpiP__Spi__read(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = HplAtm128SpiP__SPI__read();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 124 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline bool HplAtm128SpiP__SPI__isInterruptPending(void )
#line 124
{
  return (* (volatile uint8_t *)(0x2D + 0x20) & (1 << 7)) != 0;
}

# 136 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static bool Atm128SpiP__Spi__isInterruptPending(void ){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = HplAtm128SpiP__SPI__isInterruptPending();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 196 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static __inline uint8_t Atm128SpiP__FastSpiByte__splitRead(void )
#line 196
{
  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;
  return Atm128SpiP__Spi__read();
}

# 68 "../../tos/interfaces/FastSpiByte.nc"
inline static uint8_t RF230DriverLayerP__FastSpiByte__splitRead(void ){
#line 68
  unsigned char __nesc_result;
#line 68

#line 68
  __nesc_result = Atm128SpiP__FastSpiByte__splitRead();
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 116 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__write(uint8_t d)
#line 116
{
#line 116
  * (volatile uint8_t *)(0X2E + 0x20) = d;
}

# 103 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__write(uint8_t data){
#line 103
  HplAtm128SpiP__SPI__write(data);
#line 103
}
#line 103
# 202 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static __inline uint8_t Atm128SpiP__FastSpiByte__splitReadWrite(uint8_t data)
#line 202
{
  uint8_t b;

  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;

  b = Atm128SpiP__Spi__read();
  Atm128SpiP__Spi__write(data);

  return b;
}

# 74 "../../tos/interfaces/FastSpiByte.nc"
inline static uint8_t RF230DriverLayerP__FastSpiByte__splitReadWrite(uint8_t data){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = Atm128SpiP__FastSpiByte__splitReadWrite(data);
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 192 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static __inline void Atm128SpiP__FastSpiByte__splitWrite(uint8_t data)
#line 192
{
  Atm128SpiP__Spi__write(data);
}

# 62 "../../tos/interfaces/FastSpiByte.nc"
inline static void RF230DriverLayerP__FastSpiByte__splitWrite(uint8_t data){
#line 62
  Atm128SpiP__FastSpiByte__splitWrite(data);
#line 62
}
#line 62
# 56 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )37U &= ~(1 << 0);
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SELN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 41
}
#line 41
# 155 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static __inline void RF230DriverLayerP__writeRegister(uint8_t reg, uint8_t value)
{
  for (; 0; ) ;
  for (; 0; ) ;

  RF230DriverLayerP__SELN__clr();
  RF230DriverLayerP__FastSpiByte__splitWrite(RF230_CMD_REGISTER_WRITE | reg);
  RF230DriverLayerP__FastSpiByte__splitReadWrite(value);
  RF230DriverLayerP__FastSpiByte__splitRead();
  RF230DriverLayerP__SELN__set();
}

#line 319
static __inline void RF230DriverLayerP__changeChannel(void )
{
  for (; 0; ) ;
  for (; 0; ) ;

  if (RF230DriverLayerP__isSpiAcquired()) 
    {
      RF230DriverLayerP__writeRegister(RF230_PHY_CC_CCA, RF230_CCA_MODE_VALUE | RF230DriverLayerP__channel);

      if (RF230DriverLayerP__state == RF230DriverLayerP__STATE_RX_ON) {
        RF230DriverLayerP__state = RF230DriverLayerP__STATE_TRX_OFF_2_RX_ON;
        }
      else {
#line 331
        RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_SIGNAL_DONE;
        }
    }
}

# 55 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )37U |= 1 << 7;
}

# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SLP_TR__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set();
#line 40
}
#line 40
# 89 "../../tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline void HplRF230P__IRQ__disable(void )
{
  HplRF230P__Capture__stop();
}

# 66 "../../tos/interfaces/GpioCapture.nc"
inline static void RF230DriverLayerP__IRQ__disable(void ){
#line 66
  HplRF230P__IRQ__disable();
#line 66
}
#line 66
# 165 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__start(void )
#line 165
{
#line 165
  * (volatile uint8_t *)0x6F |= 1 << 5;
}

# 67 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__start(void ){
#line 67
  HplAtm1281Timer1P__Capture__start();
#line 67
}
#line 67
# 159 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__reset(void )
#line 159
{
#line 159
  * (volatile uint8_t *)(0x16 + 0x20) = 1 << 5;
}

# 64 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__reset(void ){
#line 64
  HplAtm1281Timer1P__Capture__reset();
#line 64
}
#line 64
# 155 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__setEdge(bool up)
#line 155
{
#line 155
  if (up) {
#line 155
    * (volatile uint8_t *)0x81 |= 1 << 6;
    }
  else {
#line 155
    * (volatile uint8_t *)0x81 &= ~(1 << 6);
    }
}

# 88 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__setEdge(bool up){
#line 88
  HplAtm1281Timer1P__Capture__setEdge(up);
#line 88
}
#line 88
# 74 "../../tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline error_t HplRF230P__IRQ__captureRisingEdge(void )
{
  HplRF230P__Capture__setEdge(TRUE);
  HplRF230P__Capture__reset();
  HplRF230P__Capture__start();

  return SUCCESS;
}

# 53 "../../tos/interfaces/GpioCapture.nc"
inline static error_t RF230DriverLayerP__IRQ__captureRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = HplRF230P__IRQ__captureRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 167 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static __inline uint8_t RF230DriverLayerP__readRegister(uint8_t reg)
{
  for (; 0; ) ;
  for (; 0; ) ;

  RF230DriverLayerP__SELN__clr();
  RF230DriverLayerP__FastSpiByte__splitWrite(RF230_CMD_REGISTER_READ | reg);
  RF230DriverLayerP__FastSpiByte__splitReadWrite(0);
  reg = RF230DriverLayerP__FastSpiByte__splitRead();
  RF230DriverLayerP__SELN__set();

  return reg;
}

# 90 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint16_t HplAtm1281Timer1P__Timer__get(void )
#line 90
{
#line 90
  return * (volatile uint16_t *)0x84;
}

# 61 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__get(void ){
#line 61
  unsigned short __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm1281Timer1P__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 78 "../../tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__timer_size dt)
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__get(), dt);
}

# 66 "../../tos/lib/timer/Alarm.nc"
inline static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type dt){
#line 66
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__start(dt);
#line 66
}
#line 66
# 111 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(uint8_t id, tradio_size timeout)
{
  for (; 0; ) ;

  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm = id;
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_WAIT;
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(timeout);
}

# 50 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void RF230DriverLayerP__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(3U, timeout);
#line 50
}
#line 50
#line 45
inline static bool RF230DriverLayerP__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(3U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 337 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static __inline void RF230DriverLayerP__changeState(void )
{

  if ((
#line 339
  RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_STANDBY || RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TURNON)
   && RF230DriverLayerP__state == RF230DriverLayerP__STATE_SLEEP && RF230DriverLayerP__RadioAlarm__isFree()) 
    {
      RF230DriverLayerP__SLP_TR__clr();

      RF230DriverLayerP__RadioAlarm__wait(RF230DriverLayerP__SLEEP_WAKEUP_TIME);
      RF230DriverLayerP__state = RF230DriverLayerP__STATE_SLEEP_2_TRX_OFF;
    }
  else {
#line 347
    if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TURNON && RF230DriverLayerP__state == RF230DriverLayerP__STATE_TRX_OFF && RF230DriverLayerP__isSpiAcquired()) 
      {
        for (; 0; ) ;

        RF230DriverLayerP__readRegister(RF230_IRQ_STATUS);
        RF230DriverLayerP__IRQ__captureRisingEdge();


        RF230DriverLayerP__writeRegister(RF230_PHY_CC_CCA, RF230_CCA_MODE_VALUE | RF230DriverLayerP__channel);

        RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_RX_ON);
        RF230DriverLayerP__state = RF230DriverLayerP__STATE_TRX_OFF_2_RX_ON;
      }
    else {
#line 373
      if ((
#line 372
      RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TURNOFF || RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_STANDBY)
       && RF230DriverLayerP__state == RF230DriverLayerP__STATE_RX_ON && RF230DriverLayerP__isSpiAcquired()) 
        {
          RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_FORCE_TRX_OFF);

          RF230DriverLayerP__IRQ__disable();
          RF230DriverLayerP__radioIrq = FALSE;

          RF230DriverLayerP__state = RF230DriverLayerP__STATE_TRX_OFF;
        }
      }
    }
#line 383
  if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TURNOFF && RF230DriverLayerP__state == RF230DriverLayerP__STATE_TRX_OFF) 
    {
      RF230DriverLayerP__SLP_TR__set();
      RF230DriverLayerP__state = RF230DriverLayerP__STATE_SLEEP;
      RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_SIGNAL_DONE;
    }
  else {
#line 389
    if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_STANDBY && RF230DriverLayerP__state == RF230DriverLayerP__STATE_TRX_OFF) {
      RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_SIGNAL_DONE;
      }
    }
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 351 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg)
{
  message_t *m;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize >= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
        m = msg;
        }
      else {
          uint8_t idx = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead + /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;

#line 362
          if (idx >= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
            idx -= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE;
            }
          m = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[idx];
          /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[idx] = msg;

          ++/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;
          /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask();
        }
    }
#line 371
    __nesc_atomic_end(__nesc_atomic); }

  return m;
}

# 54 "../../tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(message_t *msg){
#line 54
  nx_struct message_t *__nesc_result;
#line 54

#line 54
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(msg);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 163 "../../tos/lib/rfxlink/util/NeighborhoodP.nc"
static __inline void /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__NeighborhoodFlag__set(uint8_t bit, uint8_t idx)
{
  /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__flags[idx] |= 1 << bit;
}

# 51 "../../tos/lib/rfxlink/util/NeighborhoodFlag.nc"
inline static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(uint8_t idx){
#line 51
  /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__NeighborhoodFlag__set(0U, idx);
#line 51
}
#line 51
# 164 "../../tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__UniqueConfig__reportChannelError(void )
{
}

# 58 "../../tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError(void ){
#line 58
  RF230RadioP__UniqueConfig__reportChannelError();
#line 58
}
#line 58
# 158 "../../tos/lib/rfxlink/util/NeighborhoodP.nc"
static __inline bool /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__NeighborhoodFlag__get(uint8_t bit, uint8_t idx)
{
  return /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__flags[idx] & (1 << bit);
}

# 46 "../../tos/lib/rfxlink/util/NeighborhoodFlag.nc"
inline static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(uint8_t idx){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__NeighborhoodFlag__get(0U, idx);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 160 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg)
{
  return __nesc_ntoh_leuint8(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dsn.nxdata);
}

# 120 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint8_t RF230RadioP__Ieee154PacketLayer__getDSN(message_t *msg){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(msg);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 149 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__UniqueConfig__getSequenceNumber(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__getDSN(msg);
}

# 42 "../../tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(message_t *msg){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = RF230RadioP__UniqueConfig__getSequenceNumber(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 190 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->src.nxdata);
}

# 151 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t RF230RadioP__Ieee154PacketLayer__getSrcAddr(message_t *msg){
#line 151
  unsigned short __nesc_result;
#line 151

#line 151
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(msg);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
# 159 "../../tos/chips/rf230/RF230RadioP.nc"
static inline am_addr_t RF230RadioP__UniqueConfig__getSender(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__getSrcAddr(msg);
}

# 47 "../../tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static am_addr_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(message_t *msg){
#line 47
  unsigned short __nesc_result;
#line 47

#line 47
  __nesc_result = RF230RadioP__UniqueConfig__getSender(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 115 "../../tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx)
#line 115
{
}

# 81 "../../tos/lib/rfxlink/util/Neighborhood.nc"
inline static void /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__Neighborhood__evicted(uint8_t idx){
#line 81
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(idx);
#line 81
}
#line 81
# 94 "../../tos/lib/rfxlink/util/NeighborhoodP.nc"
static inline uint8_t /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__Neighborhood__insertNode(am_addr_t node)
{
  uint8_t i;
  uint8_t maxAge;

  if (/*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__nodes[/*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__last] == node) 
    {
      if (/*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__ages[/*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__last] == /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__time) {
        return /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__last;
        }
      /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__ages[/*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__last] = ++/*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__time;
      maxAge = 0x80;
    }
  else 
    {
      uint8_t oldest = 0;

#line 110
      maxAge = 0;

      for (i = 0; i < 5; ++i) 
        {
          uint8_t age;

          if (/*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__nodes[i] == node) 
            {
              /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__last = i;
              if (/*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__ages[i] == /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__time) {
                return i;
                }
              /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__ages[i] = ++/*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__time;
              maxAge = 0x80;
              break;
            }

          age = /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__time - /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__ages[i];
          if (age > maxAge) 
            {
              maxAge = age;
              oldest = i;
            }
        }

      if (i == 5) 
        {
          /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__Neighborhood__evicted(oldest);

          /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__last = oldest;
          /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__nodes[oldest] = node;
          /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__ages[oldest] = ++/*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__time;
          /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__flags[oldest] = 0;
        }
    }

  if ((/*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__time & 0x7F) == 0x7F && maxAge >= 0x7F) 
    {
      for (i = 0; i < 5; ++i) 
        {
          if ((/*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__ages[i] | 0x7F) != /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__time) {
            /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__ages[i] = /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__time & 0x80;
            }
        }
    }
  return /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__last;
}

# 72 "../../tos/lib/rfxlink/util/Neighborhood.nc"
inline static uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(am_addr_t id){
#line 72
  unsigned char __nesc_result;
#line 72

#line 72
  __nesc_result = /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__Neighborhood__insertNode(id);
#line 72

#line 72
  return __nesc_result;
#line 72
}
#line 72
# 92 "../../tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg)
{
  uint8_t idx = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(/*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(msg));
  uint8_t dsn = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(msg);

  if (/*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(idx)) 
    {
      uint8_t diff = dsn - /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[idx];

      if (diff == 0) 
        {
          /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError();
          return msg;
        }
    }
  else {
    /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(idx);
    }
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[idx] = dsn;

  return /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(msg);
}

# 54 "../../tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(message_t *msg){
#line 54
  nx_struct message_t *__nesc_result;
#line 54

#line 54
  __nesc_result = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(msg);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 50 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(1U, timeout);
#line 50
}
#line 50
# 62 "../../tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__getNow(void )
#line 62
{
  return /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__get();
}

# 109 "../../tos/lib/timer/Alarm.nc"
inline static /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow(void ){
#line 109
  unsigned short __nesc_result;
#line 109

#line 109
  __nesc_result = /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 88 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
static __inline tradio_size /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(uint8_t id)
{
  return /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow();
}

# 65 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow(void ){
#line 65
  unsigned short __nesc_result;
#line 65

#line 65
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(1U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 168 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RF230RadioP__Ieee154PacketLayer__requiresAckReply(message_t *msg){
#line 168
  unsigned char __nesc_result;
#line 168

#line 168
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(msg);
#line 168

#line 168
  return __nesc_result;
#line 168
}
#line 168
# 65 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size RF230RadioP__RadioAlarm__getNow(void ){
#line 65
  unsigned short __nesc_result;
#line 65

#line 65
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(0U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 269 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint16_t RF230RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg)
{
  uint16_t time;


  time = RF230RadioP__RadioAlarm__getNow();


  if (RF230RadioP__Ieee154PacketLayer__requiresAckReply(msg)) {
    time += (uint16_t )(32 * (-5 + 16 + 11 + 5) * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
    }
  else {
#line 280
    time += (uint16_t )(32 * (-5 + 5) * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
    }
  return time;
}

# 57 "../../tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(message_t *msg){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = RF230RadioP__RandomCollisionConfig__getTransmitBarrier(msg);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 168 "../../tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg)
{
  int16_t delay;

  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(msg);
  delay = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier - /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow();

  if (delay > 0) 
    {
      if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY) 
        {

          if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) 
            {
              /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(delay);
              /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
            }
        }
      else {
        /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state |= /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
        }
    }
  return /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(msg);
}

# 54 "../../tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(message_t *msg){
#line 54
  nx_struct message_t *__nesc_result;
#line 54

#line 54
  __nesc_result = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(msg);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 49 "../../tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = RF230DriverLayerP__RadioSend__send(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 56 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 56
  RF230DriverLayerP__RadioPacket__setPayloadLength(msg, length);
#line 56
}
#line 56
# 100 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(msg, length);
}

# 56 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 56
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(msg, length);
#line 56
}
#line 56
# 126 "../../tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(msg, length);
}

# 56 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 56
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(msg, length);
#line 56
}
#line 56
# 117 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack)
{
  ieee154_simple_header_t *header = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(ack);

#line 120
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(ack, /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_LENGTH);

  __nesc_hton_leuint16(header->fcf.nxdata, /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE);
  __nesc_hton_leuint8(header->dsn.nxdata, __nesc_ntoh_leuint8(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(data)->dsn.nxdata));
}

# 88 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack){
#line 88
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(data, ack);
#line 88
}
#line 88
# 126 "../../tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack)
{
  RF230RadioP__Ieee154PacketLayer__createAckReply(data, ack);
}

# 80 "../../tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(message_t *data, message_t *ack){
#line 80
  RF230RadioP__SoftwareAckConfig__createAckPacket(data, ack);
#line 80
}
#line 80
# 121 "../../tos/chips/rf230/RF230RadioP.nc"
static inline bool RF230RadioP__SoftwareAckConfig__requiresAckReply(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__requiresAckReply(msg);
}

# 75 "../../tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(message_t *msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = RF230RadioP__SoftwareAckConfig__requiresAckReply(msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 57 "../../tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error_t error){
#line 57
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error);
#line 57
}
#line 57
# 155 "../../tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error)
{
  for (; 0; ) ;

  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error);
}

# 57 "../../tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error_t error){
#line 57
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error);
#line 57
}
#line 57
# 52 "../../tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__set(message_t *msg){
#line 52
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(0U, msg);
#line 52
}
#line 52
# 173 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareB__stop(void )
#line 173
{
#line 173
  * (volatile uint8_t *)0x6F &= ~(1 << 2);
}

# 68 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__stop(void ){
#line 68
  HplAtm1281Timer1P__CompareB__stop();
#line 68
}
#line 68
# 74 "../../tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__stop(void )
#line 74
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__stop();
}

# 73 "../../tos/lib/timer/Alarm.nc"
inline static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__stop(void ){
#line 73
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__stop();
#line 73
}
#line 73
# 120 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(uint8_t id)
{
  for (; 0; ) ;
  for (; 0; ) ;

  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__stop();
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
}

# 55 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel(void ){
#line 55
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(2U);
#line 55
}
#line 55
# 126 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack)
{
  ieee154_simple_header_t *header = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(ack);

  return __nesc_ntoh_leuint8(header->dsn.nxdata) == __nesc_ntoh_leuint8(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(data)->dsn.nxdata)
   && (__nesc_ntoh_leuint16(header->fcf.nxdata) & /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK) == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE;
}

# 94 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RF230RadioP__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack){
#line 94
  unsigned char __nesc_result;
#line 94

#line 94
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(data, ack);
#line 94

#line 94
  return __nesc_result;
#line 94
}
#line 94
# 111 "../../tos/chips/rf230/RF230RadioP.nc"
static inline bool RF230RadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack)
{
  return RF230RadioP__Ieee154PacketLayer__verifyAckReply(data, ack);
}

# 69 "../../tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(message_t *data, message_t *ack){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = RF230RadioP__SoftwareAckConfig__verifyAckPacket(data, ack);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 106 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK) == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE;
}

# 75 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RF230RadioP__Ieee154PacketLayer__isAckFrame(message_t *msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 106 "../../tos/chips/rf230/RF230RadioP.nc"
static inline bool RF230RadioP__SoftwareAckConfig__isAckPacket(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__isAckFrame(msg);
}

# 62 "../../tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(message_t *msg){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RF230RadioP__SoftwareAckConfig__isAckPacket(msg);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 147 "../../tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline message_t */*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg)
{
  for (; 0; ) ;

  if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(msg)) 
    {
      if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT && /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg, msg)) 
        {
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel();
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__set(/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg);

          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(SUCCESS);
        }

      return msg;
    }

  if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY && /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(msg)) 
    {
      /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(msg, &/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg);


      if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(&/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg) == SUCCESS) {
        /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_SEND;
        }
      else {
#line 173
        for (; 0; ) ;
        }
    }
  return /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(msg);
}

# 54 "../../tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t *RF230DriverLayerP__RadioReceive__receive(message_t *msg){
#line 54
  nx_struct message_t *__nesc_result;
#line 54

#line 54
  __nesc_result = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(msg);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 1017 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__PacketLinkQuality__set(message_t *msg, uint8_t value)
{
  RF230DriverLayerP__getMeta(msg)->lqi = value;
}

# 253 "/usr/lib/gcc/avr/4.9.4/../../../../avr/include/util/crc16.h" 3
#line 252
static __inline uint16_t 
_crc_ccitt_update(uint16_t __crc, uint8_t __data)
{
  uint16_t __ret;

   __asm volatile (
  "eor    %A0,%1""\n\t"

  "mov    __tmp_reg__,%A0""\n\t"
  "swap   %A0""\n\t"
  "andi   %A0,0xf0""\n\t"
  "eor    %A0,__tmp_reg__""\n\t"

  "mov    __tmp_reg__,%B0""\n\t"

  "mov    %B0,%A0""\n\t"

  "swap   %A0""\n\t"
  "andi   %A0,0x0f""\n\t"
  "eor    __tmp_reg__,%A0""\n\t"

  "lsr    %A0""\n\t"
  "eor    %B0,%A0""\n\t"

  "eor    %A0,%B0""\n\t"
  "lsl    %A0""\n\t"
  "lsl    %A0""\n\t"
  "lsl    %A0""\n\t"
  "eor    %A0,__tmp_reg__" : 

  "=d"(__ret) : 
  "r"(__data), "0"(__crc) : 
  "r0");

  return __ret;
}

# 82 "../../tos/platforms/iris/chips/rf230/RadioConfig.h"
static __inline uint16_t RF230_CRCBYTE_COMMAND(uint16_t crc, uint8_t data)
{
  return _crc_ccitt_update(crc, data);
}

# 312 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline bool /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg)
{
  bool notFull;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 317
    notFull = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize < /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE;
#line 317
    __nesc_atomic_end(__nesc_atomic); }

  return notFull;
}

# 47 "../../tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(message_t *msg){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 84 "../../tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg)
{

  return /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(msg);
}

# 47 "../../tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(message_t *msg){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 163 "../../tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg)
{
  return /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(msg);
}

# 47 "../../tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(message_t *msg){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 134 "../../tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg)
{

  if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(msg)) {
    return /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT;
    }




  return /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(msg);
}

# 47 "../../tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool RF230DriverLayerP__RadioReceive__header(message_t *msg){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 88 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__RF230DriverConfig__headerPreloadLength(void )
{

  return 7;
}

# 59 "../../tos/chips/rf230/RF230DriverConfig.nc"
inline static uint8_t RF230DriverLayerP__Config__headerPreloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = RF230RadioP__RF230DriverConfig__headerPreloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 214 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static __inline uint8_t Atm128SpiP__FastSpiByte__write(uint8_t data)
#line 214
{
  Atm128SpiP__Spi__write(data);

  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;

  return Atm128SpiP__Spi__read();
}

# 81 "../../tos/interfaces/FastSpiByte.nc"
inline static uint8_t RF230DriverLayerP__FastSpiByte__write(uint8_t data){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = Atm128SpiP__FastSpiByte__write(data);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 612 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static __inline void RF230DriverLayerP__downloadMessage(void )
{
  uint8_t length;
  uint16_t crc;

  RF230DriverLayerP__SELN__clr();
  RF230DriverLayerP__FastSpiByte__write(RF230_CMD_FRAME_READ);


  length = RF230DriverLayerP__FastSpiByte__write(0);


  if (length >= 3 && length <= RF230DriverLayerP__RadioPacket__maxPayloadLength() + 2) 
    {
      uint8_t read;
      uint8_t *data;


      RF230DriverLayerP__FastSpiByte__splitWrite(0);

      data = RF230DriverLayerP__getPayload(RF230DriverLayerP__rxMsg);
      __nesc_hton_leuint8(RF230DriverLayerP__getHeader(RF230DriverLayerP__rxMsg)->length.nxdata, length);
      crc = 0;


      length -= 2;

      read = RF230DriverLayerP__Config__headerPreloadLength();
      if (length < read) {
        read = length;
        }
      length -= read;

      do {
          crc = RF230_CRCBYTE_COMMAND(crc, * data++ = RF230DriverLayerP__FastSpiByte__splitReadWrite(0));
        }
      while (--read != 0);

      if (RF230DriverLayerP__RadioReceive__header(RF230DriverLayerP__rxMsg)) 
        {
          while (length-- != 0) 
            crc = RF230_CRCBYTE_COMMAND(crc, * data++ = RF230DriverLayerP__FastSpiByte__splitReadWrite(0));

          crc = RF230_CRCBYTE_COMMAND(crc, RF230DriverLayerP__FastSpiByte__splitReadWrite(0));
          crc = RF230_CRCBYTE_COMMAND(crc, RF230DriverLayerP__FastSpiByte__splitReadWrite(0));

          RF230DriverLayerP__PacketLinkQuality__set(RF230DriverLayerP__rxMsg, RF230DriverLayerP__FastSpiByte__splitRead());
        }
      else 
        {
          RF230DriverLayerP__FastSpiByte__splitRead();
          crc = 1;
        }
    }
  else {
    crc = 1;
    }
  RF230DriverLayerP__SELN__set();
  RF230DriverLayerP__state = RF230DriverLayerP__STATE_RX_ON;
#line 688
  RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_NONE;


  if (crc == 0) {
    RF230DriverLayerP__rxMsg = RF230DriverLayerP__RadioReceive__receive(RF230DriverLayerP__rxMsg);
    }
}

# 135 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint16_t RF230RadioP__SoftwareAckConfig__getAckTimeout(void )
{
  return (uint16_t )(1000 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
}

# 43 "../../tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static uint16_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout(void ){
#line 43
  unsigned short __nesc_result;
#line 43

#line 43
  __nesc_result = RF230RadioP__SoftwareAckConfig__getAckTimeout();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 50 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(2U, timeout);
#line 50
}
#line 50
#line 45
inline static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(2U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 200 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg)
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(msg)
   && /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg)
   && /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg) != 0xFFFF;
}

# 162 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RF230RadioP__Ieee154PacketLayer__requiresAckWait(message_t *msg){
#line 162
  unsigned char __nesc_result;
#line 162

#line 162
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(msg);
#line 162

#line 162
  return __nesc_result;
#line 162
}
#line 162
# 101 "../../tos/chips/rf230/RF230RadioP.nc"
static inline bool RF230RadioP__SoftwareAckConfig__requiresAckWait(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__requiresAckWait(msg);
}

# 55 "../../tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(message_t *msg){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = RF230RadioP__SoftwareAckConfig__requiresAckWait(msg);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 97 "../../tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error)
{
  if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_SEND) 
    {

      for (; 0; ) ;

      /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
    }
  else 
    {
      for (; 0; ) ;
      for (; 0; ) ;

      if (error == SUCCESS && /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg) && /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree()) 
        {
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout());
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT;
        }
      else 
        {
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error);
        }
    }
}

# 57 "../../tos/lib/rfxlink/util/RadioSend.nc"
inline static void RF230DriverLayerP__RadioSend__sendDone(error_t error){
#line 57
  /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error);
#line 57
}
#line 57
# 57 "../../tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(message_t *msg){
#line 57
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(1U, msg);
#line 57
}
#line 57
# 77 "../../tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(message_t *msg)
{
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(msg);
}

# 70 "../../tos/interfaces/PacketTimeStamp.nc"
inline static void RF230DriverLayerP__PacketTimeStamp__clear(message_t * msg){
#line 70
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(msg);
#line 70
}
#line 70
# 136 "../../tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(msg) + sizeof(timestamp_metadata_t );
}

#line 60
static inline timestamp_metadata_t */*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(msg);
}

# 52 "../../tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(message_t *msg){
#line 52
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(1U, msg);
#line 52
}
#line 52
# 82 "../../tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(message_t *msg, uint32_t value)
{
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(msg);
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(msg)->timestamp = value;
}

# 78 "../../tos/interfaces/PacketTimeStamp.nc"
inline static void RF230DriverLayerP__PacketTimeStamp__set(message_t * msg, RF230DriverLayerP__PacketTimeStamp__size_type value){
#line 78
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(msg, value);
#line 78
}
#line 78
# 64 "../../tos/lib/timer/Counter.nc"
inline static /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 53 "../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void )
{
  return /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get();
}

# 61 "../../tos/lib/timer/LocalTime.nc"
inline static uint32_t RF230DriverLayerP__LocalTime__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 57 "../../tos/lib/rfxlink/util/PacketFlag.nc"
inline static void RF230DriverLayerP__RSSIFlag__clear(message_t *msg){
#line 57
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(3U, msg);
#line 57
}
#line 57
# 962 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__PacketRSSI__clear(message_t *msg)
{
  RF230DriverLayerP__RSSIFlag__clear(msg);
}

# 52 "../../tos/lib/rfxlink/util/PacketFlag.nc"
inline static void RF230DriverLayerP__RSSIFlag__set(message_t *msg){
#line 52
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(3U, msg);
#line 52
}
#line 52





inline static void RF230DriverLayerP__TransmitPowerFlag__clear(message_t *msg){
#line 57
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(2U, msg);
#line 57
}
#line 57
# 967 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__PacketRSSI__set(message_t *msg, uint8_t value)
{

  RF230DriverLayerP__TransmitPowerFlag__clear(msg);

  RF230DriverLayerP__RSSIFlag__set(msg);
  RF230DriverLayerP__getMeta(msg)->rssi = value;
}

#line 608
static inline void RF230DriverLayerP__RadioCCA__default__done(error_t error)
#line 608
{
}

# 53 "../../tos/lib/rfxlink/util/RadioCCA.nc"
inline static void RF230DriverLayerP__RadioCCA__done(error_t error){
#line 53
  RF230DriverLayerP__RadioCCA__default__done(error);
#line 53
}
#line 53
# 710 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__serviceRadio(void )
{
  if (RF230DriverLayerP__state != RF230DriverLayerP__STATE_SLEEP && RF230DriverLayerP__isSpiAcquired()) 
    {
      uint16_t time;
      uint32_t time32;
      uint8_t irq;
      uint8_t temp;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 719
        time = RF230DriverLayerP__capturedTime;
#line 719
        __nesc_atomic_end(__nesc_atomic); }
      RF230DriverLayerP__radioIrq = FALSE;
      irq = RF230DriverLayerP__readRegister(RF230_IRQ_STATUS);
#line 753
      if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TURNON || RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_CHANNEL) 
        {
          for (; 0; ) ;
          for (; 0; ) ;

          RF230DriverLayerP__state = RF230DriverLayerP__STATE_RX_ON;
          RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_SIGNAL_DONE;
        }
      else {
#line 761
        if (irq & RF230_IRQ_PLL_LOCK) 
          {
            for (; 0; ) ;
            for (; 0; ) ;
          }
        }
      if (irq & RF230_IRQ_RX_START) 
        {
          if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_CCA) 
            {
              RF230DriverLayerP__RadioCCA__done(FAIL);
              RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_NONE;
            }

          if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_NONE) 
            {
              for (; 0; ) ;


              if (irq == RF230_IRQ_RX_START) 
                {
                  temp = RF230DriverLayerP__readRegister(RF230_PHY_RSSI) & RF230_RSSI_MASK;
                  RF230DriverLayerP__rssiBusy += temp - (RF230DriverLayerP__rssiBusy >> 2);

                  RF230DriverLayerP__PacketRSSI__set(RF230DriverLayerP__rxMsg, temp);
                }
              else 
                {
                  RF230DriverLayerP__PacketRSSI__clear(RF230DriverLayerP__rxMsg);
                }










              if (irq == RF230_IRQ_RX_START) 
                {
                  time32 = RF230DriverLayerP__LocalTime__get();
                  time32 += (int16_t )(time - RF230DriverLayerP__RX_SFD_DELAY) - (int16_t )time32;
                  RF230DriverLayerP__PacketTimeStamp__set(RF230DriverLayerP__rxMsg, time32);
                }
              else {
                RF230DriverLayerP__PacketTimeStamp__clear(RF230DriverLayerP__rxMsg);
                }
              RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_RECEIVE;
            }
          else {
            for (; 0; ) ;
            }
        }
      if (irq & RF230_IRQ_TRX_END) 
        {
          if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TRANSMIT) 
            {
              for (; 0; ) ;

              RF230DriverLayerP__state = RF230DriverLayerP__STATE_RX_ON;
              RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_NONE;
              RF230DriverLayerP__RadioSend__sendDone(SUCCESS);


              for (; 0; ) ;
            }
          else {
#line 829
            if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_RECEIVE) 
              {
                for (; 0; ) ;


                RF230DriverLayerP__rssiClear += (RF230DriverLayerP__readRegister(RF230_PHY_RSSI) & RF230_RSSI_MASK) - (RF230DriverLayerP__rssiClear >> 2);

                RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_DOWNLOAD;
              }
            else {
              for (; 0; ) ;
              }
            }
        }
    }
}

#line 861
static inline void RF230DriverLayerP__Tasklet__run(void )
{
  if (RF230DriverLayerP__radioIrq) {
    RF230DriverLayerP__serviceRadio();
    }
  if (RF230DriverLayerP__cmd != RF230DriverLayerP__CMD_NONE) 
    {
      if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_DOWNLOAD) {
        RF230DriverLayerP__downloadMessage();
        }
      else {
#line 870
        if (RF230DriverLayerP__CMD_TURNOFF <= RF230DriverLayerP__cmd && RF230DriverLayerP__cmd <= RF230DriverLayerP__CMD_TURNON) {
          RF230DriverLayerP__changeState();
          }
        else {
#line 872
          if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_CHANNEL) {
            RF230DriverLayerP__changeChannel();
            }
          }
        }
#line 875
      if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_SIGNAL_DONE) 
        {
          RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_NONE;
          RF230DriverLayerP__RadioState__done();
        }
    }

  if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_NONE && RF230DriverLayerP__state == RF230DriverLayerP__STATE_RX_ON && !RF230DriverLayerP__radioIrq) {
    RF230DriverLayerP__RadioSend__ready();
    }
  if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_NONE) {
    RF230DriverLayerP__releaseSpi__postTask();
    }
}

# 261 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void )
{
}

# 59 "../../tos/lib/rfxlink/util/Tasklet.nc"
inline static void RF230DriverLayerP__Tasklet__schedule(void ){
#line 59
  /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__schedule();
#line 59
}
#line 59
# 192 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__RadioAlarm__fired(void )
{
  if (RF230DriverLayerP__state == RF230DriverLayerP__STATE_SLEEP_2_TRX_OFF) {
    RF230DriverLayerP__state = RF230DriverLayerP__STATE_TRX_OFF;
    }
  else {
#line 196
    if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_CCA) 
      {
        uint8_t cca;

        for (; 0; ) ;

        RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_NONE;
        cca = RF230DriverLayerP__readRegister(RF230_TRX_STATUS);

        for (; 0; ) ;

        RF230DriverLayerP__RadioCCA__done(cca & RF230_CCA_DONE ? cca & RF230_CCA_STATUS ? SUCCESS : EBUSY : FAIL);
      }
    else {
      for (; 0; ) ;
      }
    }
  RF230DriverLayerP__Tasklet__schedule();
}

# 140 "../../tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__SoftwareAckConfig__reportChannelError(void )
{
}

# 86 "../../tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError(void ){
#line 86
  RF230RadioP__SoftwareAckConfig__reportChannelError();
#line 86
}
#line 86
# 124 "../../tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void )
{
  for (; 0; ) ;

  /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError();

  /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
  /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(SUCCESS);
}

# 262 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint16_t RF230RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg)
{
  return (uint16_t )(2240 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
}

# 46 "../../tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(message_t *msg){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = RF230RadioP__RandomCollisionConfig__getCongestionBackoff(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 57 "../../tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(message_t *msg){
#line 57
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(0U, msg);
#line 57
}
#line 57
# 78 "../../tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline error_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg)
{
  error_t error;

  if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY) 
    {
      if ((error = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(msg)) == SUCCESS) 
        {
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(msg);
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_DATA_SEND;
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg = msg;
        }
    }
  else {
    error = EBUSY;
    }
  return error;
}

# 49 "../../tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 110 "../../tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void )
{
  error_t error;
  int16_t delay;

  for (; 0; ) ;

  delay = (int16_t )/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier - /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow();

  if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) 
    {
      /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;

      /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready();
      return;
    }
  else {
#line 126
    if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER && delay > 0) {
      error = EBUSY;
      }
    else {
#line 129
      error = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg);
      }
    }
#line 131
  if (error != SUCCESS) 
    {
      if ((/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & ~/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) == /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST) 
        {
          /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) | /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_SECOND;
          /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg)));
        }
      else 
        {
          if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER && delay > 0) 
            {
              /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
              /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(delay);
            }
          else {
            /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;
            }
          /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error);
        }
    }
  else {
    /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_SENDING;
    }
}

# 285 "../../tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__RadioAlarm__fired(void )
{
}

# 102 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(uint8_t id)
{
}

# 60 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(uint8_t arg_0x7fbb489aae10){
#line 60
  switch (arg_0x7fbb489aae10) {
#line 60
    case 0U:
#line 60
      RF230RadioP__RadioAlarm__fired();
#line 60
      break;
#line 60
    case 1U:
#line 60
      /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired();
#line 60
      break;
#line 60
    case 2U:
#line 60
      /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired();
#line 60
      break;
#line 60
    case 3U:
#line 60
      RF230DriverLayerP__RadioAlarm__fired();
#line 60
      break;
#line 60
    default:
#line 60
      /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(arg_0x7fbb489aae10);
#line 60
      break;
#line 60
    }
#line 60
}
#line 60
# 93 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void )
{
  if (/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_FIRED) 
    {
      /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
      /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm);
    }
}

# 48 "../../tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__run(void ){
#line 48
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run();
#line 48
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run();
#line 48
  RF230DriverLayerP__Tasklet__run();
#line 48
}
#line 48
# 142 "../../tos/system/SimpleArbiterP.nc"
static inline bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__isOwner(uint8_t id)
#line 142
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 143
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId == id && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_BUSY) {
          unsigned char __nesc_temp = 
#line 144
          TRUE;

          {
#line 144
            __nesc_atomic_end(__nesc_atomic); 
#line 144
            return __nesc_temp;
          }
        }
      else 
#line 145
        {
          unsigned char __nesc_temp = 
#line 145
          FALSE;

          {
#line 145
            __nesc_atomic_end(__nesc_atomic); 
#line 145
            return __nesc_temp;
          }
        }
    }
#line 148
    __nesc_atomic_end(__nesc_atomic); }
}

# 128 "../../tos/interfaces/Resource.nc"
inline static bool RF230DriverLayerP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__isOwner(0U);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 392 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__ResourceConfigure__configure(uint8_t id)
#line 392
{
  Atm128SpiP__startSpi();
}

# 59 "../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(uint8_t arg_0x7fbb4888f730){
#line 59
  Atm128SpiP__ResourceConfigure__configure(arg_0x7fbb4888f730);
#line 59
}
#line 59
# 162 "../../tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__immediateRequested(uint8_t id)
#line 162
{
}

# 61 "../../tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__immediateRequested(uint8_t arg_0x7fbb488900d0){
#line 61
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__immediateRequested(arg_0x7fbb488900d0);
#line 61
}
#line 61
# 83 "../../tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__immediateRequest(uint8_t id)
#line 83
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__immediateRequested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 85
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_IDLE) {
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_BUSY;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = id;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
          {
            unsigned char __nesc_temp = 
#line 90
            SUCCESS;

            {
#line 90
              __nesc_atomic_end(__nesc_atomic); 
#line 90
              return __nesc_temp;
            }
          }
        }
#line 92
      {
        unsigned char __nesc_temp = 
#line 92
        FAIL;

        {
#line 92
          __nesc_atomic_end(__nesc_atomic); 
#line 92
          return __nesc_temp;
        }
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 97 "../../tos/interfaces/Resource.nc"
inline static error_t RF230DriverLayerP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__immediateRequest(0U);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 52 "../../tos/interfaces/McuPowerState.nc"
inline static void HplAtm128SpiP__Mcu__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 173 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster)
#line 173
{
  if (isMaster) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 4;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 4);
    }
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__SS__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 61 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )36U |= 1 << 1;
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__SCK__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput();
#line 46
}
#line 46
# 59 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )36U &= ~(1 << 3);
}

# 44 "../../tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MISO__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput();
#line 44
}
#line 44
# 61 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )36U |= 1 << 2;
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MOSI__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput();
#line 46
}
#line 46
# 96 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void )
#line 96
{
  HplAtm128SpiP__MOSI__makeOutput();
  HplAtm128SpiP__MISO__makeInput();
  HplAtm128SpiP__SCK__makeOutput();
  HplAtm128SpiP__SS__makeOutput();
  HplAtm128SpiP__SPI__setMasterBit(TRUE);
}

# 83 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__initMaster(void ){
#line 83
  HplAtm128SpiP__SPI__initMaster();
#line 83
}
#line 83
# 186 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle)
#line 186
{
  if (highWhenIdle) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 3;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 3);
    }
}

# 125 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle){
#line 125
  HplAtm128SpiP__SPI__setClockPolarity(highWhenIdle);
#line 125
}
#line 125
# 200 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing)
#line 200
{
  if (sampleOnTrailing) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 2;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 2);
    }
}

# 128 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing){
#line 128
  HplAtm128SpiP__SPI__setClockPhase(sampleOnTrailing);
#line 128
}
#line 128
# 230 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on)
#line 230
{
  if (on) {
      * (volatile uint8_t *)(0x2D + 0x20) |= 1 << 0;
    }
  else {
      * (volatile uint8_t *)(0x2D + 0x20) &= ~(1 << 0);
    }
}

# 141 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on){
#line 141
  HplAtm128SpiP__SPI__setMasterDoubleSpeed(on);
#line 141
}
#line 141
# 217 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v)
#line 217
{
  v &= (1 << 1) | (1 << 0);
  * (volatile uint8_t *)(0x2C + 0x20) = (* (volatile uint8_t *)(0x2C + 0x20) & ~((1 << 1) | (1 << 0))) | v;
}

# 131 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClock(uint8_t speed){
#line 131
  HplAtm128SpiP__SPI__setClock(speed);
#line 131
}
#line 131
# 160 "../../tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__requested(uint8_t id)
#line 160
{
}

# 53 "../../tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__requested(uint8_t arg_0x7fbb488900d0){
#line 53
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__requested(arg_0x7fbb488900d0);
#line 53
}
#line 53
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 64 "../../tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[id] != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY || /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(id)) {
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = id;
          }
        else {
#line 88
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail] = id;
          }
#line 89
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "../../tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 83 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__RF230DriverConfig__metadataLength(message_t *msg)
{
  return 0;
}

# 52 "../../tos/chips/rf230/RF230DriverConfig.nc"
inline static uint8_t RF230DriverLayerP__Config__metadataLength(message_t *msg){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = RF230RadioP__RF230DriverConfig__metadataLength(msg);
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 917 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline uint8_t RF230DriverLayerP__RadioPacket__metadataLength(message_t *msg)
{
  return RF230DriverLayerP__Config__metadataLength(msg) + sizeof(rf230_metadata_t );
}

# 67 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(message_t *msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = RF230DriverLayerP__RadioPacket__metadataLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 110 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(msg) + sizeof(flags_metadata_t );
}

#line 54
static inline flags_metadata_t */*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(msg);
}



static inline bool /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(uint8_t bit, message_t *msg)
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags & (1 << bit);
}

# 42 "../../tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool RF230DriverLayerP__TransmitPowerFlag__get(message_t *msg){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(2U, msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 929 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline bool RF230DriverLayerP__PacketTransmitPower__isSet(message_t *msg)
{
  return RF230DriverLayerP__TransmitPowerFlag__get(msg);
}

static inline uint8_t RF230DriverLayerP__PacketTransmitPower__get(message_t *msg)
{
  return RF230DriverLayerP__getMeta(msg)->power;
}

# 94 "../../tos/chips/rf230/RF230RadioP.nc"
static inline bool RF230RadioP__RF230DriverConfig__requiresRssiCca(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__isDataFrame(msg);
}

# 65 "../../tos/chips/rf230/RF230DriverConfig.nc"
inline static bool RF230DriverLayerP__Config__requiresRssiCca(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = RF230RadioP__RF230DriverConfig__requiresRssiCca(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 60 "../../tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "../../tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 68 "../../tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
        uint8_t id = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead;

#line 72
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead];
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
          }
#line 75
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[id] = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "../../tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 52 "../../tos/interfaces/McuPowerState.nc"
inline static void Atm128SpiP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 112 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__sleep(void )
#line 112
{
}

# 89 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__sleep(void ){
#line 89
  HplAtm128SpiP__SPI__sleep();
#line 89
}
#line 89
#line 116
inline static void Atm128SpiP__Spi__enableSpi(bool busOn){
#line 116
  HplAtm128SpiP__SPI__enableSpi(busOn);
#line 116
}
#line 116
# 165 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__stopSpi(void )
#line 165
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 167
  {
    Atm128SpiP__Spi__sleep();
  }
  Atm128SpiP__McuPowerState__update();
}

#line 396
static inline void Atm128SpiP__ResourceConfigure__unconfigure(uint8_t id)
#line 396
{
  Atm128SpiP__stopSpi();
}

# 65 "../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__unconfigure(uint8_t arg_0x7fbb4888f730){
#line 65
  Atm128SpiP__ResourceConfigure__unconfigure(arg_0x7fbb4888f730);
#line 65
}
#line 65
# 61 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void ){
#line 61
  unsigned short __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm1281Timer1P__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 50 "../../tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get();
}

# 64 "../../tos/lib/timer/Counter.nc"
inline static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__get(void ){
#line 64
  unsigned short __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 145 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getInterruptFlag(void )
#line 145
{
  return * (volatile uint8_t *)(0x16 + 0x20);
}

#line 176
static inline bool HplAtm1281Timer1P__Timer__test(void )
#line 176
{
  return ((Atm128_TIFR_t )HplAtm1281Timer1P__TimerCtrl__getInterruptFlag()).bits.tov;
}

# 87 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = HplAtm1281Timer1P__Timer__test();
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 55 "../../tos/chips/atm128/timer/Atm128CounterC.nc"
static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test();
}

# 71 "../../tos/lib/timer/Counter.nc"
inline static bool /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 42 "../../tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool RF230DriverLayerP__TimeSyncFlag__get(message_t *msg){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(4U, msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 978 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline bool RF230DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return RF230DriverLayerP__TimeSyncFlag__get(msg);
}

#line 891
static inline uint8_t RF230DriverLayerP__RadioPacket__headerLength(message_t *msg)
{
  return RF230DriverLayerP__Config__headerLength(msg) + sizeof(rf230_header_t );
}

#line 983
static inline uint8_t RF230DriverLayerP__PacketTimeSyncOffset__get(message_t *msg)
{
  return RF230DriverLayerP__RadioPacket__headerLength(msg) + RF230DriverLayerP__RadioPacket__payloadLength(msg) - sizeof(timesync_absolute_t );
}

# 65 "../../tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size RF230DriverLayerP__RadioAlarm__getNow(void ){
#line 65
  unsigned short __nesc_result;
#line 65

#line 65
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(3U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 347 "/home/jharbin/nesc-install/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 372
static __inline  int32_t __nesc_hton_int32(void * target, int32_t value)
#line 372
{
#line 372
  __nesc_hton_uint32(target, value);
#line 372
  return value;
}

# 215 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareB__set(uint16_t t)
#line 215
{
#line 215
  * (volatile uint16_t *)0x8A = t;
}

# 54 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__set(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__size_type t){
#line 54
  HplAtm1281Timer1P__CompareB__set(t);
#line 54
}
#line 54
# 161 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareB__reset(void )
#line 161
{
#line 161
  * (volatile uint8_t *)(0x16 + 0x20) = 1 << 2;
}

# 62 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__reset(void ){
#line 62
  HplAtm1281Timer1P__CompareB__reset();
#line 62
}
#line 62
# 167 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareB__start(void )
#line 167
{
#line 167
  * (volatile uint8_t *)0x6F |= 1 << 2;
}

# 65 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__start(void ){
#line 65
  HplAtm1281Timer1P__CompareB__start();
#line 65
}
#line 65
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 244 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint16_t RF230RadioP__RandomCollisionConfig__getMinimumBackoff(void )
{
  return (uint16_t )(320 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
}

# 51 "../../tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff(void ){
#line 51
  unsigned short __nesc_result;
#line 51

#line 51
  __nesc_result = RF230RadioP__RandomCollisionConfig__getMinimumBackoff();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 60 "../../tos/system/FcfsResourceQueueC.nc"
static inline bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "../../tos/interfaces/ResourceQueue.nc"
inline static bool /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 68 "../../tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead != /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead;

#line 72
        /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead];
        if (/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 75
        /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[id] = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "../../tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 166 "../../tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 166
{
}

# 65 "../../tos/interfaces/ResourceConfigure.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x7fbb4888f730){
#line 65
    /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x7fbb4888f730);
#line 65
}
#line 65
# 501 "../../tos/lib/ftsp/TimeSyncP.nc"
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncNotify__default__msg_received(void )
#line 501
{
}

# 46 "../../tos/lib/ftsp/TimeSyncNotify.nc"
inline static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncNotify__msg_received(void ){
#line 46
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncNotify__default__msg_received();
#line 46
}
#line 46
# 166 "../../tos/lib/ftsp/TimeSyncP.nc"
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__calculateConversion(void )
{
  float newSkew = /*TimeSyncC.TimeSyncP*/TimeSyncP__0__skew;
  uint32_t newLocalAverage;
  int32_t newOffsetAverage;
  int32_t localAverageRest;
  int32_t offsetAverageRest;

  int64_t localSum;
  int64_t offsetSum;

  int8_t i;

  for (i = 0; i < /*TimeSyncC.TimeSyncP*/TimeSyncP__0__MAX_ENTRIES && /*TimeSyncC.TimeSyncP*/TimeSyncP__0__table[i].state != /*TimeSyncC.TimeSyncP*/TimeSyncP__0__ENTRY_FULL; ++i) 
    ;

  if (i >= /*TimeSyncC.TimeSyncP*/TimeSyncP__0__MAX_ENTRIES) {
    return;
    }



  newLocalAverage = /*TimeSyncC.TimeSyncP*/TimeSyncP__0__table[i].localTime;
  newOffsetAverage = /*TimeSyncC.TimeSyncP*/TimeSyncP__0__table[i].timeOffset;

  localSum = 0;
  localAverageRest = 0;
  offsetSum = 0;
  offsetAverageRest = 0;

  while (++i < /*TimeSyncC.TimeSyncP*/TimeSyncP__0__MAX_ENTRIES) 
    if (/*TimeSyncC.TimeSyncP*/TimeSyncP__0__table[i].state == /*TimeSyncC.TimeSyncP*/TimeSyncP__0__ENTRY_FULL) {



        localSum += (int32_t )(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__table[i].localTime - newLocalAverage) / /*TimeSyncC.TimeSyncP*/TimeSyncP__0__tableEntries;
        localAverageRest += (/*TimeSyncC.TimeSyncP*/TimeSyncP__0__table[i].localTime - newLocalAverage) % /*TimeSyncC.TimeSyncP*/TimeSyncP__0__tableEntries;
        offsetSum += (int32_t )(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__table[i].timeOffset - newOffsetAverage) / /*TimeSyncC.TimeSyncP*/TimeSyncP__0__tableEntries;
        offsetAverageRest += (/*TimeSyncC.TimeSyncP*/TimeSyncP__0__table[i].timeOffset - newOffsetAverage) % /*TimeSyncC.TimeSyncP*/TimeSyncP__0__tableEntries;
      }

  newLocalAverage += localSum + localAverageRest / /*TimeSyncC.TimeSyncP*/TimeSyncP__0__tableEntries;
  newOffsetAverage += offsetSum + offsetAverageRest / /*TimeSyncC.TimeSyncP*/TimeSyncP__0__tableEntries;

  localSum = offsetSum = 0;
  for (i = 0; i < /*TimeSyncC.TimeSyncP*/TimeSyncP__0__MAX_ENTRIES; ++i) 
    if (/*TimeSyncC.TimeSyncP*/TimeSyncP__0__table[i].state == /*TimeSyncC.TimeSyncP*/TimeSyncP__0__ENTRY_FULL) {
        int32_t a = /*TimeSyncC.TimeSyncP*/TimeSyncP__0__table[i].localTime - newLocalAverage;
        int32_t b = /*TimeSyncC.TimeSyncP*/TimeSyncP__0__table[i].timeOffset - newOffsetAverage;

        localSum += (int64_t )a * a;
        offsetSum += (int64_t )a * b;
      }

  if (localSum != 0) {
    newSkew = (float )offsetSum / (float )localSum;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*TimeSyncC.TimeSyncP*/TimeSyncP__0__skew = newSkew;
      /*TimeSyncC.TimeSyncP*/TimeSyncP__0__offsetAverage = newOffsetAverage;
      /*TimeSyncC.TimeSyncP*/TimeSyncP__0__localAverage = newLocalAverage;
      /*TimeSyncC.TimeSyncP*/TimeSyncP__0__numEntries = /*TimeSyncC.TimeSyncP*/TimeSyncP__0__tableEntries;
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 340 "/home/jharbin/nesc-install/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 242 "../../tos/lib/ftsp/TimeSyncP.nc"
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__addNewEntry(TimeSyncMsg *msg)
{
  int8_t i;
#line 244
  int8_t freeItem = -1;
#line 244
  int8_t oldestItem = 0;
  uint32_t age;
#line 245
  uint32_t oldestTime = 0;
  int32_t timeError;


  timeError = __nesc_ntoh_uint32(msg->localTime.nxdata);
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__GlobalTime__local2Global((uint32_t *)&timeError);
  timeError -= __nesc_ntoh_uint32(msg->globalTime.nxdata);
  if (/*TimeSyncC.TimeSyncP*/TimeSyncP__0__is_synced() == SUCCESS && (
  timeError > /*TimeSyncC.TimeSyncP*/TimeSyncP__0__ENTRY_THROWOUT_LIMIT || timeError < -/*TimeSyncC.TimeSyncP*/TimeSyncP__0__ENTRY_THROWOUT_LIMIT)) 
    {
      if (++/*TimeSyncC.TimeSyncP*/TimeSyncP__0__numErrors > 3) {
        /*TimeSyncC.TimeSyncP*/TimeSyncP__0__clearTable();
        }
#line 257
      return;
    }

  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__tableEntries = 0;
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__numErrors = 0;

  for (i = 0; i < /*TimeSyncC.TimeSyncP*/TimeSyncP__0__MAX_ENTRIES; ++i) {
      age = __nesc_ntoh_uint32(msg->localTime.nxdata) - /*TimeSyncC.TimeSyncP*/TimeSyncP__0__table[i].localTime;


      if (age >= 0x7FFFFFFFL) {
        /*TimeSyncC.TimeSyncP*/TimeSyncP__0__table[i].state = /*TimeSyncC.TimeSyncP*/TimeSyncP__0__ENTRY_EMPTY;
        }
      if (/*TimeSyncC.TimeSyncP*/TimeSyncP__0__table[i].state == /*TimeSyncC.TimeSyncP*/TimeSyncP__0__ENTRY_EMPTY) {
        freeItem = i;
        }
      else {
#line 273
        ++/*TimeSyncC.TimeSyncP*/TimeSyncP__0__tableEntries;
        }
      if (age >= oldestTime) {
          oldestTime = age;
          oldestItem = i;
        }
    }

  if (freeItem < 0) {
    freeItem = oldestItem;
    }
  else {
#line 284
    ++/*TimeSyncC.TimeSyncP*/TimeSyncP__0__tableEntries;
    }
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__table[freeItem].state = /*TimeSyncC.TimeSyncP*/TimeSyncP__0__ENTRY_FULL;

  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__table[freeItem].localTime = __nesc_ntoh_uint32(msg->localTime.nxdata);
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__table[freeItem].timeOffset = __nesc_ntoh_uint32(msg->globalTime.nxdata) - __nesc_ntoh_uint32(msg->localTime.nxdata);
}

# 55 "../../tos/system/NoLedsC.nc"
static inline void NoLedsC__Leds__led0Toggle(void )
#line 55
{
}

# 67 "../../tos/interfaces/Leds.nc"
inline static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Leds__led0Toggle(void ){
#line 67
  NoLedsC__Leds__led0Toggle();
#line 67
}
#line 67
# 113 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__getPayload(am_id_t id, message_t *msg, uint8_t len)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(msg, len);
}

# 135 "../../tos/interfaces/AMSend.nc"
inline static void * /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__getPayload(am_id_t arg_0x7fbb47ddbb60, message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__getPayload(arg_0x7fbb47ddbb60, msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 211 "../../tos/system/AMQueueImplP.nc"
static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(uint8_t id, message_t *m, uint8_t len)
#line 211
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__getPayload(0, m, len);
}

# 125 "../../tos/interfaces/Send.nc"
inline static void * /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(0U, msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 73 "../../tos/system/AMQueueEntryP.nc"
static inline void */*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(message_t *m, uint8_t len)
#line 73
{
  return /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__getPayload(m, len);
}

# 135 "../../tos/interfaces/AMSend.nc"
inline static void * /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__SubAMSend__getPayload(message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 190 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
static inline void */*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendRadio__getPayload(am_id_t id, message_t *msg, uint8_t len)
{
  return /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__SubAMSend__getPayload(msg, len + sizeof(timesync_footer_t ));
}

#line 219
static inline void */*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendMilli__getPayload(am_id_t id, message_t *msg, uint8_t len)
{
  return /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendRadio__getPayload(id, msg, len);
}

# 114 "../../tos/interfaces/TimeSyncAMSend.nc"
inline static void */*TimeSyncC.TimeSyncP*/TimeSyncP__0__Send__getPayload(message_t *msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendMilli__getPayload(TIMESYNC_AM_FTSP, msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 292 "../../tos/lib/ftsp/TimeSyncP.nc"
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__processMsg__runTask(void )
{
  TimeSyncMsg *msg = (TimeSyncMsg *)/*TimeSyncC.TimeSyncP*/TimeSyncP__0__Send__getPayload(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__processedMsg, sizeof(TimeSyncMsg ));

  if (__nesc_ntoh_uint16(msg->rootID.nxdata) < __nesc_ntoh_uint16(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->rootID.nxdata) && 


  !(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__heartBeats < /*TimeSyncC.TimeSyncP*/TimeSyncP__0__IGNORE_ROOT_MSG && __nesc_ntoh_uint16(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->rootID.nxdata) == TOS_NODE_ID)) {
      __nesc_hton_uint16(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->rootID.nxdata, __nesc_ntoh_uint16(msg->rootID.nxdata));
      __nesc_hton_uint8(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->seqNum.nxdata, __nesc_ntoh_uint8(msg->seqNum.nxdata));
    }
  else {
#line 303
    if (__nesc_ntoh_uint16(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->rootID.nxdata) == __nesc_ntoh_uint16(msg->rootID.nxdata) && (int8_t )(__nesc_ntoh_uint8(msg->seqNum.nxdata) - __nesc_ntoh_uint8(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->seqNum.nxdata)) > 0) {
        __nesc_hton_uint8(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->seqNum.nxdata, __nesc_ntoh_uint8(msg->seqNum.nxdata));
      }
    else {
      goto exit;
      }
    }
#line 309
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Leds__led0Toggle();
  if (__nesc_ntoh_uint16(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->rootID.nxdata) < TOS_NODE_ID) {
    /*TimeSyncC.TimeSyncP*/TimeSyncP__0__heartBeats = 0;
    }
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__addNewEntry(msg);
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__calculateConversion();
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncNotify__msg_received();

  exit: 
    /*TimeSyncC.TimeSyncP*/TimeSyncP__0__state &= ~/*TimeSyncC.TimeSyncP*/TimeSyncP__0__STATE_PROCESSING;
}

# 294 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(msg, length + sizeof(ieee154_simple_header_t ));
}

# 56 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 56
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(msg, length);
#line 56
}
#line 56
# 164 "../../tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(msg, length + /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET);
}

# 56 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 56
  /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(msg, length);
#line 56
}
#line 56
# 224 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(msg, length + sizeof(activemessage_header_t ));
}

#line 256
static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(msg, len);
}

# 94 "../../tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(msg, len);
#line 94
}
#line 94
# 90 "../../tos/system/AMQueueImplP.nc"
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(msg);

      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 75 "../../tos/interfaces/Send.nc"
inline static error_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 193 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(message_t *msg, am_id_t type)
{
  __nesc_hton_uint8(/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(msg)->type.nxdata, type);
}

# 162 "../../tos/interfaces/AMPacket.nc"
inline static void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(amsg, t);
#line 162
}
#line 162
# 185 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dest.nxdata, addr);
}

# 146 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr){
#line 146
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(msg, addr);
#line 146
}
#line 146
# 178 "../../tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__ActiveMessageConfig__setDestination(message_t *msg, am_addr_t addr)
{
  RF230RadioP__Ieee154PacketLayer__setDestAddr(msg, addr);
}

# 43 "../../tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setDestination(message_t *msg, am_addr_t addr){
#line 43
  RF230RadioP__ActiveMessageConfig__setDestination(msg, addr);
#line 43
}
#line 43
# 173 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(message_t *msg, am_addr_t addr)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setDestination(msg, addr);
}

# 103 "../../tos/interfaces/AMPacket.nc"
inline static void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "../../tos/system/AMQueueEntryP.nc"
static inline error_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(msg, dest);
  /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(msg, 61U);
  return /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(msg, len);
}

# 80 "../../tos/interfaces/AMSend.nc"
inline static error_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__SubAMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 52 "../../tos/lib/rfxlink/util/PacketFlag.nc"
inline static void RF230DriverLayerP__TimeSyncFlag__set(message_t *msg){
#line 52
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(4U, msg);
#line 52
}
#line 52
# 993 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__PacketTimeSyncOffset__set(message_t *msg, uint8_t value)
{

  for (; 0; ) ;

  RF230DriverLayerP__TimeSyncFlag__set(msg);
}

# 59 "../../tos/lib/rfxlink/util/PacketField.nc"
inline static void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__PacketTimeSyncOffset__set(message_t *msg, /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__PacketTimeSyncOffset__value_type value){
#line 59
  RF230DriverLayerP__PacketTimeSyncOffset__set(msg, value);
#line 59
}
#line 59
# 165 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
static inline error_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendRadio__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len, uint32_t event_time)
{
  timesync_footer_t *footer = (timesync_footer_t *)(msg->data + len);

  __nesc_hton_uint8(footer->type.nxdata, id);
  __nesc_hton_uint32(footer->timestamp.absolute.nxdata, event_time);
  /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__PacketTimeSyncOffset__set(msg, (unsigned short )& ((message_t *)0)->data + len + (unsigned short )& ((timesync_footer_t *)0)->timestamp.absolute);

  return /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__SubAMSend__send(addr, msg, len + sizeof(timesync_footer_t ));
}

# 61 "../../tos/lib/timer/LocalTime.nc"
inline static uint32_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__LocalTimeRadio__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
inline static uint32_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__LocalTimeMilli__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 197 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
static inline error_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendMilli__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len, uint32_t event_time)
{

  event_time = ((int32_t )(event_time - /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__LocalTimeMilli__get()) << (5 + MICA_DIVIDE_ONE_FOR_32KHZ_LOG2)) + /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__LocalTimeRadio__get();

  return /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendRadio__send(id, addr, msg, len, event_time);
}

# 64 "../../tos/interfaces/TimeSyncAMSend.nc"
inline static error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Send__send(am_addr_t addr, message_t *msg, uint8_t len, /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Send__size_type event_time){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendMilli__send(TIMESYNC_AM_FTSP, addr, msg, len, event_time);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 349 "../../tos/lib/ftsp/TimeSyncP.nc"
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__sendMsg__runTask(void )
{
  unsigned char __nesc_temp47;
  unsigned char *__nesc_temp46;
#line 351
  uint32_t localTime;
#line 351
  uint32_t globalTime;

  globalTime = localTime = /*TimeSyncC.TimeSyncP*/TimeSyncP__0__GlobalTime__getLocalTime();
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__GlobalTime__local2Global(&globalTime);



  if (__nesc_ntoh_uint16(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->rootID.nxdata) == TOS_NODE_ID) {
      if ((int32_t )(localTime - /*TimeSyncC.TimeSyncP*/TimeSyncP__0__localAverage) >= 0x20000000) 
        {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
            {
              /*TimeSyncC.TimeSyncP*/TimeSyncP__0__localAverage = localTime;
              /*TimeSyncC.TimeSyncP*/TimeSyncP__0__offsetAverage = globalTime - localTime;
            }
#line 365
            __nesc_atomic_end(__nesc_atomic); }
        }
    }
  else {
#line 368
    if (/*TimeSyncC.TimeSyncP*/TimeSyncP__0__heartBeats >= /*TimeSyncC.TimeSyncP*/TimeSyncP__0__ROOT_TIMEOUT) {
        /*TimeSyncC.TimeSyncP*/TimeSyncP__0__heartBeats = 0;
        __nesc_hton_uint16(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->rootID.nxdata, TOS_NODE_ID);
        (__nesc_temp46 = /*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->seqNum.nxdata, __nesc_hton_uint8(__nesc_temp46, (__nesc_temp47 = __nesc_ntoh_uint8(__nesc_temp46) + 1)), __nesc_temp47);
      }
    }
  __nesc_hton_uint32(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->globalTime.nxdata, globalTime);




  if (/*TimeSyncC.TimeSyncP*/TimeSyncP__0__numEntries < /*TimeSyncC.TimeSyncP*/TimeSyncP__0__ENTRY_SEND_LIMIT && __nesc_ntoh_uint16(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->rootID.nxdata) != TOS_NODE_ID) {
      ++/*TimeSyncC.TimeSyncP*/TimeSyncP__0__heartBeats;
      /*TimeSyncC.TimeSyncP*/TimeSyncP__0__state &= ~/*TimeSyncC.TimeSyncP*/TimeSyncP__0__STATE_SENDING;
    }
  else {
#line 383
    if (/*TimeSyncC.TimeSyncP*/TimeSyncP__0__Send__send(AM_BROADCAST_ADDR, &/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsgBuffer, TIMESYNCMSG_LEN, localTime) != SUCCESS) {
        /*TimeSyncC.TimeSyncP*/TimeSyncP__0__state &= ~/*TimeSyncC.TimeSyncP*/TimeSyncP__0__STATE_SENDING;
        /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncNotify__msg_sent();
      }
    }
}

# 120 "../../tos/interfaces/Resource.nc"
inline static error_t RF230DriverLayerP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__release(0U);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 40 "../../tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt)
#line 40
{

  if (dt) {


     __asm volatile (
    "1:	sbiw	%0,1\n"
    "	adiw	%0,1\n"
    "	sbiw	%0,1\n"
    "	brne	1b" : "+w"(dt));
    }
}

# 66 "../../tos/lib/timer/BusyWait.nc"
inline static void RF230DriverLayerP__BusyWait__wait(RF230DriverLayerP__BusyWait__size_type dt){
#line 66
  BusyWaitMicroC__BusyWait__wait(dt);
#line 66
}
#line 66
# 56 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 6);
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__RSTN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr();
#line 41
}
#line 41
# 242 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__initRadio(void )
{
  RF230DriverLayerP__BusyWait__wait(510);

  RF230DriverLayerP__RSTN__clr();
  RF230DriverLayerP__SLP_TR__clr();
  RF230DriverLayerP__BusyWait__wait(6);
  RF230DriverLayerP__RSTN__set();

  RF230DriverLayerP__writeRegister(RF230_TRX_CTRL_0, RF230_TRX_CTRL_0_VALUE);
  RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_TRX_OFF);

  RF230DriverLayerP__BusyWait__wait(510);

  RF230DriverLayerP__writeRegister(RF230_IRQ_MASK, ((RF230_IRQ_TRX_UR | RF230_IRQ_PLL_LOCK) | RF230_IRQ_TRX_END) | RF230_IRQ_RX_START);
  RF230DriverLayerP__writeRegister(RF230_CCA_THRES, RF230_CCA_THRES_VALUE);
  RF230DriverLayerP__writeRegister(RF230_PHY_TX_PWR, RF230_TX_AUTO_CRC_ON | (0 & RF230_TX_PWR_MASK));

  RF230DriverLayerP__txPower = 0 & RF230_TX_PWR_MASK;
  RF230DriverLayerP__channel = 26 & RF230_CHANNEL_MASK;
  RF230DriverLayerP__writeRegister(RF230_PHY_CC_CCA, RF230_CCA_MODE_VALUE | RF230DriverLayerP__channel);

  RF230DriverLayerP__SLP_TR__set();
  RF230DriverLayerP__state = RF230DriverLayerP__STATE_SLEEP;
}



static inline void RF230DriverLayerP__SpiResource__granted(void )
{

  if (RF230DriverLayerP__state == RF230DriverLayerP__STATE_P_ON) 
    {
      RF230DriverLayerP__initRadio();
      RF230DriverLayerP__SpiResource__release();
    }
  else {
    RF230DriverLayerP__Tasklet__schedule();
    }
}

# 158 "../../tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__default__granted(uint8_t id)
#line 158
{
}

# 102 "../../tos/interfaces/Resource.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__granted(uint8_t arg_0x7fbb48892df0){
#line 102
  switch (arg_0x7fbb48892df0) {
#line 102
    case 0U:
#line 102
      RF230DriverLayerP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__default__granted(arg_0x7fbb48892df0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 149 "../../tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__runTask(void )
#line 149
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 150
    {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_BUSY;
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
    }
#line 153
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__granted(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
}

# 349 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static inline 
#line 348
void Atm128SpiP__SpiPacket__default__sendDone(
uint8_t *_txbuffer, uint8_t *_rxbuffer, 
uint16_t _length, error_t _success)
#line 350
{
}

# 88 "../../tos/interfaces/SpiPacket.nc"
inline static void Atm128SpiP__SpiPacket__sendDone(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 88
  Atm128SpiP__SpiPacket__default__sendDone(txBuf, rxBuf, len, error);
#line 88
}
#line 88
# 294 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__zeroTask__runTask(void )
#line 294
{
  uint16_t myLen;
  uint8_t * rx;
  uint8_t * tx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 299
    {
      myLen = Atm128SpiP__len;
      rx = Atm128SpiP__rxBuffer;
      tx = Atm128SpiP__txBuffer;
      Atm128SpiP__rxBuffer = (void *)0;
      Atm128SpiP__txBuffer = (void *)0;
      Atm128SpiP__len = 0;
      Atm128SpiP__pos = 0;
      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
#line 308
    __nesc_atomic_end(__nesc_atomic); }
}

# 856 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__releaseSpi__runTask(void )
{
  RF230DriverLayerP__SpiResource__release();
}

# 103 "../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 242 "../../tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop(void )
#line 242
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 243
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set = FALSE;
#line 243
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop();
#line 73
}
#line 73
# 71 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 260 "../../tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow(void )
#line 260
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get();
}

# 109 "../../tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "../../tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 100 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 1104 "TdmaMacP.nc"
static inline void TdmaMacP__FaultClearTimer__fired(void )
#line 1104
{
  do {
#line 1105
      if (0) {
#line 1105
        printf("Clearing Fault\n");
        }
    }
  while (
#line 1105
  0);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 1106
    TdmaMacP__activeFault = FALSE;
#line 1106
    __nesc_atomic_end(__nesc_atomic); }
}

# 164 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "../../tos/lib/timer/Timer.nc"
inline static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Timer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(2U);
#line 78
}
#line 78
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__sendMsg__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__sendMsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 407 "../../tos/lib/ftsp/TimeSyncP.nc"
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__timeSyncMsgSend(void )
{
  if (__nesc_ntoh_uint16(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->rootID.nxdata) == 0xFFFF && ++/*TimeSyncC.TimeSyncP*/TimeSyncP__0__heartBeats >= /*TimeSyncC.TimeSyncP*/TimeSyncP__0__ROOT_TIMEOUT) {
      __nesc_hton_uint8(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->seqNum.nxdata, 0);
      __nesc_hton_uint16(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->rootID.nxdata, TOS_NODE_ID);
    }

  if (__nesc_ntoh_uint16(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->rootID.nxdata) != 0xFFFF && (/*TimeSyncC.TimeSyncP*/TimeSyncP__0__state & /*TimeSyncC.TimeSyncP*/TimeSyncP__0__STATE_SENDING) == 0) {
      /*TimeSyncC.TimeSyncP*/TimeSyncP__0__state |= /*TimeSyncC.TimeSyncP*/TimeSyncP__0__STATE_SENDING;
      /*TimeSyncC.TimeSyncP*/TimeSyncP__0__sendMsg__postTask();
    }
}

static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Timer__fired(void )
{
  if (/*TimeSyncC.TimeSyncP*/TimeSyncP__0__mode == TS_TIMER_MODE) {
      /*TimeSyncC.TimeSyncP*/TimeSyncP__0__timeSyncMsgSend();
    }
  else {
    /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Timer__stop();
    }
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*MCCC.TXFlow1.TXF*/TXFlowP__0__send__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*MCCC.TXFlow1.TXF*/TXFlowP__0__send);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 48 "TXFlowP.nc"
static inline uint32_t /*MCCC.TXFlow1.TXF*/TXFlowP__0__ms_timer(void )
#line 48
{
  return (uint32_t )30 * 115;
}

# 73 "../../tos/lib/timer/Timer.nc"
inline static void /*MCCC.TXFlow1.TXF*/TXFlowP__0__SendTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(4U, dt);
#line 73
}
#line 73
# 61 "TXFlowP.nc"
static inline void /*MCCC.TXFlow1.TXF*/TXFlowP__0__SendTimer__fired(void )
#line 61
{
  do {
#line 62
      if (0) {
#line 62
        printf("TXFlowP: Timer fired - busy is %d\n", /*MCCC.TXFlow1.TXF*/TXFlowP__0__busy);
        }
    }
  while (
#line 62
  0);
  /*MCCC.TXFlow1.TXF*/TXFlowP__0__SendTimer__startOneShot(/*MCCC.TXFlow1.TXF*/TXFlowP__0__ms_timer());
  /*MCCC.TXFlow1.TXF*/TXFlowP__0__send__postTask();
  return;
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*MCCC.TXFlow2.TXF*/TXFlowP__1__send__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*MCCC.TXFlow2.TXF*/TXFlowP__1__send);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 48 "TXFlowP.nc"
static inline uint32_t /*MCCC.TXFlow2.TXF*/TXFlowP__1__ms_timer(void )
#line 48
{
  return (uint32_t )26 * 115;
}

# 73 "../../tos/lib/timer/Timer.nc"
inline static void /*MCCC.TXFlow2.TXF*/TXFlowP__1__SendTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(5U, dt);
#line 73
}
#line 73
# 61 "TXFlowP.nc"
static inline void /*MCCC.TXFlow2.TXF*/TXFlowP__1__SendTimer__fired(void )
#line 61
{
  do {
#line 62
      if (0) {
#line 62
        printf("TXFlowP: Timer fired - busy is %d\n", /*MCCC.TXFlow2.TXF*/TXFlowP__1__busy);
        }
    }
  while (
#line 62
  0);
  /*MCCC.TXFlow2.TXF*/TXFlowP__1__SendTimer__startOneShot(/*MCCC.TXFlow2.TXF*/TXFlowP__1__ms_timer());
  /*MCCC.TXFlow2.TXF*/TXFlowP__1__send__postTask();
  return;
}

# 204 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x7fbb48418a40){
#line 83
  switch (arg_0x7fbb48418a40) {
#line 83
    case 1U:
#line 83
      TdmaMacP__FaultClearTimer__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Timer__fired();
#line 83
      break;
#line 83
    case 4U:
#line 83
      /*MCCC.TXFlow1.TXF*/TXFlowP__0__SendTimer__fired();
#line 83
      break;
#line 83
    case 5U:
#line 83
      /*MCCC.TXFlow2.TXF*/TXFlowP__1__SendTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x7fbb48418a40);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 194 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__Compare__set(uint8_t t)
#line 194
{
  /* atomic removed: atomic calls only */
  {
    while (* (volatile uint8_t *)0xB6 & (1 << 3)) 
      ;
    * (volatile uint8_t *)0xB3 = t;
  }
}

# 54 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type t){
#line 54
  HplAtm1281Timer2AsyncP__Compare__set(t);
#line 54
}
#line 54
# 99 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__Timer__get(void )
#line 99
{
#line 99
  return * (volatile uint8_t *)0xB2;
}

# 61 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm1281Timer2AsyncP__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 278 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline int HplAtm1281Timer2AsyncP__TimerAsync__compareABusy(void )
#line 278
{
  return (* (volatile uint8_t *)0xB6 & (1 << 3)) != 0;
}

# 86 "../../tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__compareABusy(void ){
#line 86
  int __nesc_result;
#line 86

#line 86
  __nesc_result = HplAtm1281Timer2AsyncP__TimerAsync__compareABusy();
#line 86

#line 86
  return __nesc_result;
#line 86
}
#line 86
# 112 "../../tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setOcr2A(uint8_t n)
#line 112
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__compareABusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base - 1;
    }
#line 122
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(n);
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "../../tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 139 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 264 "../../tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm(void )
#line 264
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 265
    {
      unsigned long __nesc_temp = 
#line 265
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt;

      {
#line 265
        __nesc_atomic_end(__nesc_atomic); 
#line 265
        return __nesc_temp;
      }
    }
#line 267
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "../../tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 89 "../../tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "../../tos/interfaces/Random.nc"
inline static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 78 "../../tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void )
{
  uint16_t a = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16();

#line 81
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 81
    /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom = a;
#line 81
    __nesc_atomic_end(__nesc_atomic); }
}

# 176 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void )
{
}

# 50 "../../tos/lib/rfxlink/util/RadioChannel.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone(void ){
#line 50
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone();
#line 50
}
#line 50
# 518 "TdmaMacP.nc"
static inline void TdmaMacP__RadioPowerControl__stopDone(error_t error)
#line 518
{
  if (TdmaMacP__requestStop) {
      TdmaMacP__requestStop = FALSE;
      do {
#line 521
          if (0) {
#line 521
            printf("<MAC>: Radio stopped \n");
            }
        }
      while (
#line 521
      0);
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 522
        TdmaMacP__radioOff = TRUE;
#line 522
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 505 "../../tos/lib/ftsp/TimeSyncP.nc"
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__RadioControl__stopDone(error_t error)
#line 505
{
}

# 138 "../../tos/interfaces/SplitControl.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(error_t error){
#line 138
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__RadioControl__stopDone(error);
#line 138
  TdmaMacP__RadioPowerControl__stopDone(error);
#line 138
}
#line 138
# 87 "../../tos/system/GenericSlotterP.nc"
static inline void GenericSlotterP__FrameConfiguration__setFrameLength(uint8_t numSlots)
#line 87
{
  /* atomic removed: atomic calls only */
#line 88
  GenericSlotterP__frameLength = numSlots;
}

# 33 "../../tos/interfaces/FrameConfiguration.nc"
inline static void TdmaMacP__FrameConfiguration__setFrameLength(uint8_t numSlots){
#line 33
  GenericSlotterP__FrameConfiguration__setFrameLength(numSlots);
#line 33
}
#line 33
# 1089 "TdmaMacP.nc"
static inline void TdmaMacP__Frame__setFrameLength(uint8_t numSlots)
#line 1089
{
  /* atomic removed: atomic calls only */
#line 1090
  TdmaMacP__currFrameSize = numSlots;
  TdmaMacP__FrameConfiguration__setFrameLength(TdmaMacP__currFrameSize);
  return;
}

# 33 "../../tos/interfaces/FrameConfiguration.nc"
inline static void MCCP__FrameConfiguration__setFrameLength(uint8_t numSlots){
#line 33
  TdmaMacP__Frame__setFrameLength(numSlots);
#line 33
}
#line 33
# 83 "../../tos/system/GenericSlotterP.nc"
static inline void GenericSlotterP__FrameConfiguration__setSlotLength(uint32_t slotTimeBms)
#line 83
{
  /* atomic removed: atomic calls only */
#line 84
  GenericSlotterP__slotLength = slotTimeBms;
}

# 32 "../../tos/interfaces/FrameConfiguration.nc"
inline static void TdmaMacP__FrameConfiguration__setSlotLength(uint32_t slotTimeBms){
#line 32
  GenericSlotterP__FrameConfiguration__setSlotLength(slotTimeBms);
#line 32
}
#line 32
# 1084 "TdmaMacP.nc"
static inline void TdmaMacP__Frame__setSlotLength(uint32_t slotTimeBms)
#line 1084
{
  /* atomic removed: atomic calls only */
#line 1085
  TdmaMacP__slotSize = slotTimeBms;
  TdmaMacP__FrameConfiguration__setSlotLength(TdmaMacP__slotSize);
  return;
}

# 32 "../../tos/interfaces/FrameConfiguration.nc"
inline static void MCCP__FrameConfiguration__setSlotLength(uint32_t slotTimeBms){
#line 32
  TdmaMacP__Frame__setSlotLength(slotTimeBms);
#line 32
}
#line 32
# 60 "MCCP.nc"
static inline void MCCP__MacControl__startDone(error_t error)
#line 60
{
  do {
#line 61
      if (0) {
#line 61
        printf("MacControl.startDone\n");
        }
    }
  while (
#line 61
  0);




  MCCP__slotSize = 100 * 32;
  MCCP__curFrameSize = 6;


  MCCP__FrameConfiguration__setSlotLength(MCCP__slotSize);
  MCCP__FrameConfiguration__setFrameLength(MCCP__curFrameSize);
}

# 113 "../../tos/interfaces/SplitControl.nc"
inline static void TdmaMacP__MacPowerControl__startDone(error_t error){
#line 113
  MCCP__MacControl__startDone(error);
#line 113
}
#line 113
# 31 "../../tos/interfaces/SlotterControl.nc"
inline static error_t TdmaMacP__SlotterControl__synchronize(uint8_t toSlot){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  __nesc_result = GenericSlotterP__SlotterControl__synchronize(toSlot);
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 481 "TdmaMacP.nc"
static inline void TdmaMacP__RadioPowerControl__startDone(error_t error)
#line 481
{


  memset(&TdmaMacP__nullPkt, 0x99, sizeof(mccpacket ));

  do {
#line 486
      if (0) {
#line 486
        printf("<PHY>: Radio startup done\n");
        }
    }
  while (
#line 486
  0);



  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 490
    {
      TdmaMacP__radioOff = FALSE;
      if (TdmaMacP__init == FALSE) {


          if (TOS_NODE_ID == 0) 
            {
              TdmaMacP__SlotterControl__synchronize(1);
              TdmaMacP__FrameConfiguration__setFrameLength(TdmaMacP__superFrameLength);
            }








          TdmaMacP__init = TRUE;
          TdmaMacP__MacPowerControl__startDone(error);
        }
    }
#line 511
    __nesc_atomic_end(__nesc_atomic); }
}

# 504 "../../tos/lib/ftsp/TimeSyncP.nc"
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__RadioControl__startDone(error_t error)
#line 504
{
}

# 113 "../../tos/interfaces/SplitControl.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(error_t error){
#line 113
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__RadioControl__startDone(error);
#line 113
  TdmaMacP__RadioPowerControl__startDone(error);
#line 113
}
#line 113
# 144 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void )
{
  uint8_t s;

  s = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state;


  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY;

  if (s == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_ON) {
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(SUCCESS);
    }
  else {
#line 155
    if (s == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_OFF) {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(SUCCESS);
      }
    else {
#line 157
      if (s == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_CHANNEL) {
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone();
        }
      else {
#line 160
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = s;
        }
      }
    }
}

# 172 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__stop(void )
#line 172
{
#line 172
  * (volatile uint8_t *)0x6F &= ~(1 << 1);
}

# 68 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void ){
#line 68
  HplAtm1281Timer1P__CompareA__stop();
#line 68
}
#line 68
# 74 "../../tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop(void )
#line 74
{
  /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop();
}

# 73 "../../tos/lib/timer/Alarm.nc"
inline static void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 102 "../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop(void )
{
  /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__stop();
}

# 73 "../../tos/lib/timer/Alarm.nc"
inline static void GenericSlotterP__Alarm__stop(void ){
#line 73
  /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 64 "../../tos/lib/timer/Counter.nc"
inline static /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__size_type /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "../../tos/lib/timer/TransformAlarmC.nc"
static inline /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get();
}

# 109 "../../tos/lib/timer/Alarm.nc"
inline static GenericSlotterP__Alarm__size_type GenericSlotterP__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 64 "../../tos/lib/timer/Counter.nc"
inline static /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get(void ){
#line 64
  unsigned short __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64







inline static bool /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 80 "../../tos/interfaces/AMSend.nc"
inline static error_t TdmaMacP__phyDataSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(AM_DMAMAC_DATA, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 139 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack)
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;

#line 141
  if (ack) {
    (__nesc_temp42 = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) | (1 << IEEE154_FCF_ACK_REQ)));
    }
  else {
#line 144
    (__nesc_temp43 = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) & ~ (uint16_t )(1 << IEEE154_FCF_ACK_REQ)));
    }
}

# 105 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack){
#line 105
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(msg, ack);
#line 105
}
#line 105
# 116 "../../tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__SoftwareAckConfig__setAckRequired(message_t *msg, bool ack)
{
  RF230RadioP__Ieee154PacketLayer__setAckRequired(msg, ack);
}

# 49 "../../tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__setAckRequired(message_t *msg, bool ack){
#line 49
  RF230RadioP__SoftwareAckConfig__setAckRequired(msg, ack);
#line 49
}
#line 49
# 181 "../../tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline error_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__requestAck(message_t *msg)
{
  /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__setAckRequired(msg, TRUE);

  return SUCCESS;
}

# 59 "../../tos/interfaces/PacketAcknowledgements.nc"
inline static error_t TdmaMacP__ACK__requestAck(message_t * msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__requestAck(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 104 "../../tos/interfaces/SplitControl.nc"
inline static error_t TdmaMacP__RadioPowerControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 348 "TdmaMacP.nc"
static inline __nesc_nxbase_nx_uint8_t TdmaMacP__route_next_hop(__nesc_nxbase_nx_uint8_t dst)
#line 348
{
  nx_uint8_t next_hop;

#line 350
  __nesc_hton_uint8(next_hop.nxdata, dst);
  if ((TOS_NODE_ID == 1 || TOS_NODE_ID == 2) && (dst == 3 || dst == 4)) {
      __nesc_hton_uint8(next_hop.nxdata, 0);
    }

  if ((TOS_NODE_ID == 3 || TOS_NODE_ID == 4) && (dst == 1 || dst == 2)) {
      __nesc_hton_uint8(next_hop.nxdata, 0);
    }
  return __nesc_ntoh_uint8(next_hop.nxdata);
}

# 30 "PrioCritQueue.nc"
inline static uint8_t TdmaMacP__forwardQueue__size(void ){
#line 30
  unsigned char __nesc_result;
#line 30

#line 30
  __nesc_result = /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__size();
#line 30

#line 30
  return __nesc_result;
#line 30
}
#line 30
# 134 "../../tos/interfaces/Leds.nc"
inline static void TdmaMacP__Leds__set(uint8_t val){
#line 134
  LedsP__Leds__set(val);
#line 134
}
#line 134
# 248 "TdmaMacP.nc"
static inline void TdmaMacP__mcc_clear_node_ack_fails(void )
#line 248
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 249
    {
#line 249
      TdmaMacP__node_ack_fails = 0;
    }
#line 250
    __nesc_atomic_end(__nesc_atomic); }
}

# 69 "../../tos/system/QueueC.nc"
static inline /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__queue_t /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__head(void )
#line 69
{
  return /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__queue[/*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__head];
}

# 80 "../../tos/interfaces/Queue.nc"
inline static /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__t  /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__head(void ){
#line 80
  struct __mccpacket *__nesc_result;
#line 80

#line 80
  __nesc_result = /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__head();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 53 "../../tos/system/QueueC.nc"
static inline bool /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__empty(void )
#line 53
{
  return /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__size == 0;
}

# 50 "../../tos/interfaces/Queue.nc"
inline static bool /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 69 "../../tos/system/QueueC.nc"
static inline /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__queue_t /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__head(void )
#line 69
{
  return /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__queue[/*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__head];
}

# 80 "../../tos/interfaces/Queue.nc"
inline static /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__t  /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__head(void ){
#line 80
  struct __mccpacket *__nesc_result;
#line 80

#line 80
  __nesc_result = /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__head();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 53 "../../tos/system/QueueC.nc"
static inline bool /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__empty(void )
#line 53
{
  return /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__size == 0;
}

# 50 "../../tos/interfaces/Queue.nc"
inline static bool /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 69 "../../tos/system/QueueC.nc"
static inline /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__queue_t /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__head(void )
#line 69
{
  return /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__queue[/*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__head];
}

# 80 "../../tos/interfaces/Queue.nc"
inline static /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__t  /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__head(void ){
#line 80
  struct __mccpacket *__nesc_result;
#line 80

#line 80
  __nesc_result = /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__head();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 53 "../../tos/system/QueueC.nc"
static inline bool /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__empty(void )
#line 53
{
  return /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__size == 0;
}

# 50 "../../tos/interfaces/Queue.nc"
inline static bool /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 33 "PrioCritQueueP.nc"
static inline /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__queue_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__head(error_t *status)
#line 33
{
  *status = SUCCESS;
  if (!/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__empty()) {
#line 35
    return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__head();
    }
  else 
#line 36
    {
      if (!/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__empty()) {
#line 37
        return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__head();
        }
      else 
#line 38
        {
          if (!/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__empty()) {
#line 39
            return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__head();
            }
          else 
#line 40
            {
              *status = FAIL;
              return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__null_elt;
            }
        }
    }
}

# 50 "PrioCritQueue.nc"
inline static TdmaMacP__forwardQueue__t  TdmaMacP__forwardQueue__head(error_t *q_status){
#line 50
  struct __mccpacket *__nesc_result;
#line 50

#line 50
  __nesc_result = /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__head(q_status);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 273 "TdmaMacP.nc"
static inline void TdmaMacP__mcc_return_to_lo_mode(void )
#line 273
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 274
    {
      TdmaMacP__hiCritMode = FALSE;
      TdmaMacP__node_ack_fails = 0;
    }
#line 277
    __nesc_atomic_end(__nesc_atomic); }
}

# 48 "PrioCritQueueP.nc"
static inline /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__queue_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__headHI(error_t *status)
#line 48
{
  *status = SUCCESS;
  if (0 && !/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__empty()) {
#line 50
    return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__head();
    }
  else 
#line 51
    {
      if (0 && !/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__empty()) {
#line 52
        return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__head();
        }
      else 
#line 53
        {
          if (0 && !/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__empty()) {
#line 54
            return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__head();
            }
          else 
#line 55
            {
              *status = FAIL;
              return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__null_elt;
            }
        }
    }
}

# 53 "PrioCritQueue.nc"
inline static TdmaMacP__forwardQueue__t TdmaMacP__forwardQueue__headHI(error_t *q_status){
#line 53
  struct __mccpacket *__nesc_result;
#line 53

#line 53
  __nesc_result = /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__headHI(q_status);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 526 "TdmaMacP.nc"
static inline void TdmaMacP__handle_tx_slot(uint8_t slot)
#line 526
{

  mccpacket *forwardDataPacket;
  error_t queue_has_pkt = SUCCESS;
  bool _phyLock;

  forwardDataPacket = &TdmaMacP__nullPkt;


  if (TdmaMacP__hiCritMode == TRUE) {
      forwardDataPacket = TdmaMacP__forwardQueue__headHI(&queue_has_pkt);
      if (queue_has_pkt == FAIL) {


          TdmaMacP__mcc_return_to_lo_mode();
        }
    }




  if (TdmaMacP__hiCritMode == FALSE || queue_has_pkt == FAIL) {
      forwardDataPacket = TdmaMacP__forwardQueue__head(&queue_has_pkt);
    }




  if (queue_has_pkt == FAIL) {
      TdmaMacP__mcc_clear_node_ack_fails();
    }





  if (queue_has_pkt == FAIL && TdmaMacP__forwardQueue__size() > 0) {
      TdmaMacP__Leds__set(7);
      while (1) {
        }
    }

  if (queue_has_pkt == SUCCESS) {

      if (TdmaMacP__hiCritMode) {
          do {
#line 571
              if (0) {
#line 571
                printf("In HI mode - selected HI flow %u packet %u RTX %u\n", __nesc_ntoh_uint8(forwardDataPacket->flow_id.nxdata), __nesc_ntoh_uint8(forwardDataPacket->seq_num.nxdata), __nesc_ntoh_uint8(forwardDataPacket->local_retransmits.nxdata));
                }
            }
          while (
#line 571
          0);


          if (__nesc_ntoh_uint8(forwardDataPacket->flow_id.nxdata) == 0) {
              do {
#line 575
                  if (0) {
#line 575
                    printf("WARNING: HI packet has flow id=0:");
                    }
                }
              while (
#line 575
              0);
              TdmaMacP__mcc_printf(forwardDataPacket);
            }
        }
      else {

          do {
#line 581
              if (0) {
#line 581
                printf("In LO mode - selected flow %u packet %u\n", __nesc_ntoh_uint8(forwardDataPacket->flow_id.nxdata), __nesc_ntoh_uint8(forwardDataPacket->seq_num.nxdata));
                }
            }
          while (
#line 581
          0);
#line 581
          ;

          TdmaMacP__mcc_printf(forwardDataPacket);
        }


      do {
#line 587
          if (0) {
#line 587
            printf("<N> Pointed address %d", (uint16_t )forwardDataPacket);
            }
        }
      while (
#line 587
      0);
      do {
#line 588
          if (0) {
#line 588
            printf("<N> : Queue size is %d \n", TdmaMacP__forwardQueue__size());
            }
        }
      while (
#line 588
      0);
      TdmaMacP__dataPacket = (mccpacket *)TdmaMacP__Packet__getPayload(&TdmaMacP__selfDataPkt, sizeof(mccpacket ));

      memcpy(TdmaMacP__dataPacket, forwardDataPacket, sizeof(mccpacket ));



      do {
#line 595
          if (0) {
#line 595
            printf("MAC selfDataPacket src = %u, prio = %u, destination = %u\n", __nesc_ntoh_uint8(TdmaMacP__dataPacket->src.nxdata), __nesc_ntoh_uint8(TdmaMacP__dataPacket->priority.nxdata), __nesc_ntoh_uint8(TdmaMacP__dataPacket->dst.nxdata));
            }
        }
      while (
#line 595
      0);

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 597
        {
          __nesc_hton_uint8(TdmaMacP__dataPacket->hop_src.nxdata, TOS_NODE_ID);
          __nesc_hton_uint8(TdmaMacP__dataPacket->hop_dst.nxdata, TdmaMacP__route_next_hop(__nesc_ntoh_uint8(TdmaMacP__dataPacket->dst.nxdata)));
          __nesc_hton_uint32(TdmaMacP__dataPacket->send_time.nxdata, TdmaMacP__GlobalTime__getLocalTime());
          __nesc_hton_uint8(TdmaMacP__dataPacket->failed_ack_stats.nxdata, TdmaMacP__node_ack_fails);

          _phyLock = TdmaMacP__phyLock;
        }
#line 604
        __nesc_atomic_end(__nesc_atomic); }

      if (_phyLock == FALSE) {
          if (TdmaMacP__radioOff) {
              do {
#line 608
                  if (0) {
#line 608
                    printf("Waking up sleeping radio \n");
                    }
                }
              while (
#line 608
              0);
              TdmaMacP__RadioPowerControl__start();
            }

          if (TdmaMacP__activeFault == FALSE) {



              if (TdmaMacP__ACK__requestAck(&TdmaMacP__selfDataPkt) == FAIL) {
                  do {
#line 617
                      if (0) {
#line 617
                        printf("<ACK> requestACK FAILED");
                        }
                    }
                  while (
#line 617
                  0);
                }
            }
          else 
#line 619
            {
              do {
#line 620
                  if (0) {
#line 620
                    printf("Fault is currently in progress... ACK request disabled\n");
                    }
                }
              while (
#line 620
              0);
            }

          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 623
            {
              __nesc_hton_uint16(TdmaMacP__dataPacket->hopSendSlot.nxdata, __nesc_ntoh_uint16(TdmaMacP__localSlot.nxdata));

              __nesc_hton_uint8(TdmaMacP__dataPacket->data[0].nxdata, TdmaMacP__discarded[0]);
              __nesc_hton_uint8(TdmaMacP__dataPacket->data[1].nxdata, TdmaMacP__discarded[1]);
              __nesc_hton_uint8(TdmaMacP__dataPacket->data[2].nxdata, TdmaMacP__discarded[2]);
              TdmaMacP__discarded[0] = 0;
              TdmaMacP__discarded[1] = 0;
              TdmaMacP__discarded[2] = 0;
            }
#line 632
            __nesc_atomic_end(__nesc_atomic); }

          if (TdmaMacP__phyDataSend__send(__nesc_ntoh_uint8(TdmaMacP__dataPacket->hop_dst.nxdata), &TdmaMacP__selfDataPkt, sizeof(mccpacket )) == SUCCESS) 
            {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 636
                TdmaMacP__phyLock = TRUE;
#line 636
                __nesc_atomic_end(__nesc_atomic); }
              do {
#line 637
                  if (0) {
#line 637
                    printf("MAC: Sent pkt to PHY\n");
                    }
                }
              while (
#line 637
              0);
            }
          else {
#line 639
            do {
#line 639
                if (0) {
#line 639
                  printf("MAC: Pkt fail\n");
                  }
              }
            while (
#line 639
            0);
            }
        }
      else {
#line 642
        do {
#line 642
            if (0) {
#line 642
              printf("MAC: Radio Locked \n");
              }
          }
        while (
#line 642
        0);
        }
    }
}

# 80 "../../tos/interfaces/AMSend.nc"
inline static error_t TdmaMacP__phyNotificationSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(AM_DMAMAC_NOTIFICATION, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 289 "TdmaMacP.nc"
static inline void TdmaMacP__print_mcc_action(action a)
#line 289
{
  switch (a) {
      case A_IDLE: do {
#line 291
            if (0) {
#line 291
              printf("A_IDLE\n");
              }
          }
        while (
#line 291
        0);
#line 291
      break;
      case A_TX: do {
#line 292
            if (0) {
#line 292
              printf("A_TX\n");
              }
          }
        while (
#line 292
        0);
#line 292
      break;
      case A_LISTEN: do {
#line 293
            if (0) {
#line 293
              printf("A_LISTEN\n");
              }
          }
        while (
#line 293
        0);
#line 293
      break;
    }
}

#line 285
static inline action TdmaMacP__get_mcc_action(action *table, __nesc_nxbase_nx_uint8_t slot)
#line 285
{
  return table[slot];
}

# 95 "../../tos/system/GenericSlotterP.nc"
static inline uint8_t GenericSlotterP__FrameConfiguration__getFrameLength(void )
#line 95
{
  return GenericSlotterP__frameLength;
}

# 35 "../../tos/interfaces/FrameConfiguration.nc"
inline static uint8_t TdmaMacP__FrameConfiguration__getFrameLength(void ){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = GenericSlotterP__FrameConfiguration__getFrameLength();
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 297 "TdmaMacP.nc"
static inline void TdmaMacP__setup_temp_mcc_table(void )
#line 297
{
  int slot;

#line 299
  if (TdmaMacP__tableNotSetup) {
      do {
#line 300
          if (0) {
#line 300
            printf("Setting up temp MCC table");
            }
        }
      while (
#line 300
      0);


      for (slot = 0; slot <= 7; slot++) {
          /* atomic removed: atomic calls only */
#line 304
          TdmaMacP__mccSchedTable[slot] = A_LISTEN;
        }
      /* atomic removed: atomic calls only */



      {
        if (TOS_NODE_ID == 0) {
#line 311
          TdmaMacP__mccSchedTable[2] = A_TX;
          }
#line 312
        if (TOS_NODE_ID == 1) {
#line 312
          TdmaMacP__mccSchedTable[3] = A_TX;
          }
#line 313
        if (TOS_NODE_ID == 2) {
#line 313
          TdmaMacP__mccSchedTable[4] = A_TX;
          }
#line 314
        if (TOS_NODE_ID == 3) {
#line 314
          TdmaMacP__mccSchedTable[5] = A_TX;
          }
#line 315
        if (TOS_NODE_ID == 4) {
#line 315
          TdmaMacP__mccSchedTable[0] = A_TX;
          }
      }
      /* atomic removed: atomic calls only */
#line 317
      TdmaMacP__tableNotSetup = FALSE;
    }
}

#line 646
static inline void TdmaMacP__Slotter__slot(uint8_t slot)
#line 646
{

  action scheduled_action;
  nx_uint16_t _localSlot;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 651
    {
      if (TdmaMacP__tableNotSetup) {
#line 652
        TdmaMacP__setup_temp_mcc_table();
        }
#line 653
      TdmaMacP__currentSlot = slot;




      if (TdmaMacP__prevSlot != slot) {
#line 658
        __nesc_hton_uint16(TdmaMacP__localSlot.nxdata, __nesc_ntoh_uint16(TdmaMacP__localSlot.nxdata) + 1);
        }
#line 659
      __nesc_hton_uint16(_localSlot.nxdata, __nesc_ntoh_uint16(TdmaMacP__localSlot.nxdata));
      TdmaMacP__prevSlot = slot;
    }
#line 661
    __nesc_atomic_end(__nesc_atomic); }



  if (TdmaMacP__activeFault == TRUE) {
      TdmaMacP__Leds__set(1);
    }
  else 
#line 667
    {
      if (TdmaMacP__hiCritMode == TRUE) {
        TdmaMacP__Leds__set(~slot % 8);
        }
      else {
#line 671
        TdmaMacP__Leds__set(slot % 8);
        }
    }

  do {
#line 675
      if (0) {
#line 675
        printf("Node ID: %u, Slot: %u, SFL %d - ", TOS_NODE_ID, slot, TdmaMacP__FrameConfiguration__getFrameLength());
        }
    }
  while (
#line 675
  0);
  scheduled_action = TdmaMacP__get_mcc_action(TdmaMacP__mccSchedTable, slot);


  TdmaMacP__print_mcc_action(scheduled_action);
  printfflush();


  if (slot == 1 && TOS_NODE_ID == 0) {


      TdmaMacP__notificationPacket = (notification_t *)TdmaMacP__Packet__getPayload(&TdmaMacP__selfNotificationPkt, sizeof(notification_t ));
      __nesc_hton_uint16(TdmaMacP__notificationPacket->rootId.nxdata, TOS_NODE_ID);
      __nesc_hton_uint16(TdmaMacP__notificationPacket->sinkSlot.nxdata, __nesc_ntoh_uint16(_localSlot.nxdata));





      if (!TdmaMacP__phyLock) 
        {

          if (
#line 696
          TdmaMacP__phyNotificationSend__send(
          AM_BROADCAST_ADDR, &TdmaMacP__selfNotificationPkt, sizeof(notification_t )) == SUCCESS) 
            {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 699
                TdmaMacP__phyLock = TRUE;
#line 699
                __nesc_atomic_end(__nesc_atomic); }
              do {
#line 700
                  if (0) {
#line 700
                    printf("<Mac>: Pkt -> Radio \n");
                    }
                }
              while (
#line 700
              0);
            }
          else {
            do {
#line 703
                if (0) {
#line 703
                  printf("<Mac>: Pkt <FAIL>  \n");
                  }
              }
            while (
#line 703
            0);
            }
        }
      else {
#line 706
        do {
#line 706
            if (0) {
#line 706
              printf("<Mac-Pkt-Fail>: Radio locked  \n");
              }
          }
        while (
#line 706
        0);
        }
    }


  if (slot != 1 && scheduled_action == A_TX) {
      TdmaMacP__handle_tx_slot(slot);
    }
}

# 31 "../../tos/interfaces/Slotter.nc"
inline static void GenericSlotterP__Slotter__slot(uint8_t num){
#line 31
  TdmaMacP__Slotter__slot(num);
#line 31
}
#line 31
# 56 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 2);
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr();
#line 41
}
#line 41
# 74 "../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led0On(void )
#line 74
{
  LedsP__Led0__clr();
  ;
#line 76
  ;
}

static inline void LedsP__Leds__led0Off(void )
#line 79
{
  LedsP__Led0__set();
  ;
#line 81
  ;
}

# 56 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 1);
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr();
#line 41
}
#line 41
# 89 "../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led1On(void )
#line 89
{
  LedsP__Led1__clr();
  ;
#line 91
  ;
}

static inline void LedsP__Leds__led1Off(void )
#line 94
{
  LedsP__Led1__set();
  ;
#line 96
  ;
}

# 56 "../../tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 0);
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr();
#line 41
}
#line 41
# 104 "../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led2On(void )
#line 104
{
  LedsP__Led2__clr();
  ;
#line 106
  ;
}

static inline void LedsP__Leds__led2Off(void )
#line 109
{
  LedsP__Led2__set();
  ;
#line 111
  ;
}

# 50 "../../tos/interfaces/Queue.nc"
inline static bool PrintfP__Queue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 419 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline error_t RF230DriverLayerP__RadioState__turnOn(void )
{
  if (RF230DriverLayerP__cmd != RF230DriverLayerP__CMD_NONE || (RF230DriverLayerP__state == RF230DriverLayerP__STATE_SLEEP && !RF230DriverLayerP__RadioAlarm__isFree())) {
    return EBUSY;
    }
  else {
#line 423
    if (RF230DriverLayerP__state == RF230DriverLayerP__STATE_RX_ON) {
      return EALREADY;
      }
    }
#line 426
  RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_TURNON;
  RF230DriverLayerP__Tasklet__schedule();

  return SUCCESS;
}

# 57 "../../tos/lib/rfxlink/util/RadioState.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn(void ){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = RF230DriverLayerP__RadioState__turnOn();
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 147 "../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type t0, /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 = t0;
      /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt = dt;
      /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

static inline void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(/*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt)
{
  /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(), dt);
}

# 66 "../../tos/lib/timer/Alarm.nc"
inline static void GenericSlotterP__Alarm__start(GenericSlotterP__Alarm__size_type dt){
#line 66
  /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(dt);
#line 66
}
#line 66
# 166 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__start(void )
#line 166
{
#line 166
  * (volatile uint8_t *)0x6F |= 1 << 1;
}

# 65 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void ){
#line 65
  HplAtm1281Timer1P__CompareA__start();
#line 65
}
#line 65
# 160 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__reset(void )
#line 160
{
#line 160
  * (volatile uint8_t *)(0x16 + 0x20) = 1 << 1;
}

# 62 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void ){
#line 62
  HplAtm1281Timer1P__CompareA__reset();
#line 62
}
#line 62
# 214 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__set(uint16_t t)
#line 214
{
#line 214
  * (volatile uint16_t *)0x88 = t;
}

# 54 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t){
#line 54
  HplAtm1281Timer1P__CompareA__set(t);
#line 54
}
#line 54
# 61 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void ){
#line 61
  unsigned short __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm1281Timer1P__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 83 "../../tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size t0, /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size dt)
#line 83
{
  /* atomic removed: atomic calls only */






  {
    /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size now;
#line 92
    /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size elapsed;
#line 92
    /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size expires;

    ;


    now = /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get();
    elapsed = now + 3 - t0;
    if (elapsed >= dt) {
      expires = now + 3;
      }
    else {
#line 102
      expires = t0 + dt;
      }



    if (expires == 0) {
      expires = 1;
      }



    /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(expires - 1);
    /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset();
    /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start();
  }
}

# 103 "../../tos/lib/timer/Alarm.nc"
inline static void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__startAt(/*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type t0, /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 132 "../../tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error)
{
}

# 97 "../../tos/interfaces/Ieee154Send.nc"
inline static void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error){
#line 97
  /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(msg, error);
#line 97
}
#line 97
# 127 "../../tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(msg, error);
}

# 57 "../../tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error){
#line 57
  /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(msg, error);
#line 57
}
#line 57
# 76 "MCCP.nc"
static inline void MCCP__MacSend__sendDone(message_t *msg, error_t error)
#line 76
{
  do {
#line 77
      if (0) {
#line 77
        printf("APP: Packets sent : %d \n", MCCP__packetsSent);
        }
    }
  while (
#line 77
  0);
  if (&MCCP__packet == msg) {
      MCCP__packetsSent++;
      MCCP__sends = FALSE;
    }
}

# 100 "../../tos/interfaces/Send.nc"
inline static void TdmaMacP__MacSend__sendDone(message_t * msg, error_t error){
#line 100
  MCCP__MacSend__sendDone(msg, error);
#line 100
}
#line 100
# 864 "TdmaMacP.nc"
static inline void TdmaMacP__phyNotificationSend__sendDone(message_t *msg, error_t error)
#line 864
{
  do {
#line 865
      if (0) {
#line 865
        printf("SinkMAC: Notification sent : %u \n", error);
        }
    }
  while (
#line 865
  0);


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 868
    TdmaMacP__phyLock = FALSE;
#line 868
    __nesc_atomic_end(__nesc_atomic); }

  TdmaMacP__MacSend__sendDone(msg, error);
}

#line 321
static inline void TdmaMacP__mcc_increase_retransmit_counter(mccpacket *mccpkt)
#line 321
{
  __nesc_hton_uint8(mccpkt->local_retransmits.nxdata, __nesc_ntoh_uint8(mccpkt->local_retransmits.nxdata) + 1);
}

# 111 "PrioCritQueueP.nc"
static inline /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__queue_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__headPrio(uint8_t prio)
#line 111
{
  switch (prio) {
      case 1: return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__head();
      case 2: return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__head();
      case 3: return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__head();
      default: return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__null_elt;
    }
}

# 62 "PrioCritQueue.nc"
inline static TdmaMacP__forwardQueue__t  TdmaMacP__forwardQueue__headPrio(uint8_t prio){
#line 62
  struct __mccpacket *__nesc_result;
#line 62

#line 62
  __nesc_result = /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__headPrio(prio);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
#line 82
inline static TdmaMacP__forwardQueue__t  TdmaMacP__forwardQueue__dequeuePrio(uint8_t prio){
#line 82
  struct __mccpacket *__nesc_result;
#line 82

#line 82
  __nesc_result = /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__dequeuePrio(prio);
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 327 "TdmaMacP.nc"
static inline bool TdmaMacP__mcc_check_should_dequeue_packet(mccpacket *mccpkt)
#line 327
{
  uint8_t _node_ack_fails;

#line 329
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 329
    _node_ack_fails = TdmaMacP__node_ack_fails;
#line 329
    __nesc_atomic_end(__nesc_atomic); }
  if (mccpkt->crit_level == HI) {
      return _node_ack_fails >= 4;
    }
  else 
#line 332
    {
      return _node_ack_fails >= 2;
    }
}

# 97 "PrioCritQueue.nc"
inline static void TdmaMacP__forwardQueue__clear(void ){
#line 97
  /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__clear();
#line 97
}
#line 97
# 88 "../../tos/interfaces/Queue.nc"
inline static /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__t  /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__dequeue(void ){
#line 88
  struct __mccpacket *__nesc_result;
#line 88

#line 88
  __nesc_result = /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__dequeue();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
#line 65
inline static uint8_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__size(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__size();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
#line 88
inline static /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__t  /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__dequeue(void ){
#line 88
  struct __mccpacket *__nesc_result;
#line 88

#line 88
  __nesc_result = /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__dequeue();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
#line 65
inline static uint8_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__size(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__size();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
#line 88
inline static /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__t  /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__dequeue(void ){
#line 88
  struct __mccpacket *__nesc_result;
#line 88

#line 88
  __nesc_result = /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__dequeue();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
#line 65
inline static uint8_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__size(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__size();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 135 "PrioCritQueueP.nc"
static inline void /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__clearLO(void )
#line 135
{

  if (!0) {
#line 137
      while (/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__size() > 0) /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__dequeue();
    }
#line 137
  ;
  if (!0) {
#line 138
      while (/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__size() > 0) /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__dequeue();
    }
#line 138
  ;
  if (!0) {
#line 139
      while (/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__size() > 0) /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__dequeue();
    }
#line 139
  ;
}

# 94 "PrioCritQueue.nc"
inline static void TdmaMacP__forwardQueue__clearLO(void ){
#line 94
  /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__clearLO();
#line 94
}
#line 94
# 170 "PrioCritQueueP.nc"
static inline uint8_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__sizeLO_Q3(void )
#line 170
{
  uint8_t outsize = 0;

#line 172
  if (!0) {
#line 172
    outsize += /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__size();
    }
#line 173
  return outsize;
}

# 108 "PrioCritQueue.nc"
inline static uint8_t TdmaMacP__forwardQueue__sizeLO_Q3(void ){
#line 108
  unsigned char __nesc_result;
#line 108

#line 108
  __nesc_result = /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__sizeLO_Q3();
#line 108

#line 108
  return __nesc_result;
#line 108
}
#line 108
# 164 "PrioCritQueueP.nc"
static inline uint8_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__sizeLO_Q2(void )
#line 164
{
  uint8_t outsize = 0;

#line 166
  if (!0) {
#line 166
    outsize += /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__size();
    }
#line 167
  return outsize;
}

# 107 "PrioCritQueue.nc"
inline static uint8_t TdmaMacP__forwardQueue__sizeLO_Q2(void ){
#line 107
  unsigned char __nesc_result;
#line 107

#line 107
  __nesc_result = /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__sizeLO_Q2();
#line 107

#line 107
  return __nesc_result;
#line 107
}
#line 107
# 158 "PrioCritQueueP.nc"
static inline uint8_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__sizeLO_Q1(void )
#line 158
{
  uint8_t outsize = 0;

#line 160
  if (!0) {
#line 160
    outsize += /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__size();
    }
#line 161
  return outsize;
}

# 106 "PrioCritQueue.nc"
inline static uint8_t TdmaMacP__forwardQueue__sizeLO_Q1(void ){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__sizeLO_Q1();
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 252 "TdmaMacP.nc"
static inline void TdmaMacP__mcc_check_to_go_high(void )
#line 252
{



  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 256
    {
      if (TdmaMacP__hiCritMode == FALSE) {
          if (TdmaMacP__node_ack_fails >= 2) {
              TdmaMacP__hiCritMode = TRUE;

              TdmaMacP__discarded[0] += TdmaMacP__forwardQueue__sizeLO_Q1();
              TdmaMacP__discarded[1] += TdmaMacP__forwardQueue__sizeLO_Q2();
              TdmaMacP__discarded[2] += TdmaMacP__forwardQueue__sizeLO_Q3();
              TdmaMacP__forwardQueue__clearLO();
            }
        }
    }
#line 267
    __nesc_atomic_end(__nesc_atomic); }
}

#line 239
static inline void TdmaMacP__mcc_register_failed_ack(void )
#line 239
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 241
    {
      TdmaMacP__node_ack_fails = TdmaMacP__node_ack_fails + 1;
      if (TdmaMacP__node_ack_fails > TdmaMacP__max_node_ack_fails) {
        TdmaMacP__max_node_ack_fails = TdmaMacP__node_ack_fails;
        }
    }
#line 246
    __nesc_atomic_end(__nesc_atomic); }
}

#line 372
static inline void TdmaMacP__record_successfully_sent_frame(mccpacket *pkt)
#line 372
{
  for (TdmaMacP__i = 50 - 1; TdmaMacP__i > 0; TdmaMacP__i--) {
      TdmaMacP__sentHistory[TdmaMacP__i] = TdmaMacP__sentHistory[TdmaMacP__i - 1];
    }
  __nesc_hton_uint16(TdmaMacP__sentHistory[0].seq_num.nxdata, __nesc_ntoh_uint8(pkt->seq_num.nxdata));
  __nesc_hton_uint8(TdmaMacP__sentHistory[0].flow_id.nxdata, __nesc_ntoh_uint8(pkt->flow_id.nxdata));
  __nesc_hton_uint32(TdmaMacP__sentHistory[0].inject_time.nxdata, __nesc_ntoh_uint32(pkt->inject_time.nxdata));
  __nesc_hton_uint32(TdmaMacP__sentHistory[0].send_time.nxdata, __nesc_ntoh_uint32(pkt->send_time.nxdata));
}

# 42 "../../tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__get(message_t *msg){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(0U, msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 195 "../../tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__wasAcked(message_t *msg)
{
  return /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__get(msg);
}

# 85 "../../tos/interfaces/PacketAcknowledgements.nc"
inline static bool TdmaMacP__ACK__wasAcked(message_t * msg){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__wasAcked(msg);
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
# 922 "TdmaMacP.nc"
static inline void TdmaMacP__phyDataSend__sendDone(message_t *msg, error_t error)
#line 922
{
  uint8_t sentPrio;
  mccpacket *headQueuePacket;
  uint8_t _node_ack_fails;


  TdmaMacP__ackedDataPacket = (mccpacket *)TdmaMacP__Packet__getPayload(msg, sizeof(mccpacket ));
  sentPrio = __nesc_ntoh_uint8(TdmaMacP__ackedDataPacket->priority.nxdata);

  do {
#line 931
      if (0) {
#line 931
        printf("<MAC>: Data sent: err code %u \n", error);
        }
    }
  while (
#line 931
  0);



  if (TdmaMacP__ACK__wasAcked(msg) && TdmaMacP__activeFault == FALSE) {
      do {
#line 936
          if (0) {
#line 936
            printf("<ACK> received - deque pkt\n");
            }
        }
      while (
#line 936
      0);


      TdmaMacP__record_successfully_sent_frame(TdmaMacP__ackedDataPacket);






      if (sentPrio >= 1 && sentPrio <= 3) {
          TdmaMacP__forwardQueue__dequeuePrio(sentPrio);
        }
      else {
          do {
#line 950
              if (0) {
#line 950
                printf("WARNING: invalid priority for dequeue %u", sentPrio);
                }
            }
          while (
#line 950
          0);
        }
    }
  else {
      do {
#line 954
          if (0) {
#line 954
            printf("<ACK> FAIL on flow %u, prio %u\n", __nesc_ntoh_uint8(TdmaMacP__ackedDataPacket->flow_id.nxdata), sentPrio);
            }
        }
      while (
#line 954
      0);


      if (TdmaMacP__activeFault) {
          do {
#line 958
              if (0) {
#line 958
                printf("<ACK> FAIL - due to Fault Active");
                }
            }
          while (
#line 958
          0);
        }


      TdmaMacP__mcc_register_failed_ack();


      TdmaMacP__mcc_check_to_go_high();


      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 968
        _node_ack_fails = TdmaMacP__node_ack_fails;
#line 968
        __nesc_atomic_end(__nesc_atomic); }



      if (_node_ack_fails >= 4) {
          TdmaMacP__forwardQueue__clear();
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 974
            {
              TdmaMacP__node_ack_fails = 0;
              TdmaMacP__hiCritMode = FALSE;
            }
#line 977
            __nesc_atomic_end(__nesc_atomic); }
        }





      if (TdmaMacP__mcc_check_should_dequeue_packet(TdmaMacP__ackedDataPacket)) {





          if (sentPrio >= 1 && sentPrio <= 3) {
              TdmaMacP__forwardQueue__dequeuePrio(sentPrio);
            }
          else 
#line 992
            {
              do {
#line 993
                  if (0) {
#line 993
                    printf("WARNING: invalid priority for dequeue %u", sentPrio);
                    }
                }
              while (
#line 993
              0);
            }
        }
      else 
#line 995
        {

          if (sentPrio >= 1 && sentPrio <= 3) {



              headQueuePacket = TdmaMacP__forwardQueue__headPrio(sentPrio);
              if (headQueuePacket != (void *)0) {
#line 1002
                TdmaMacP__mcc_increase_retransmit_counter(headQueuePacket);
                }
            }
          else 
#line 1003
            {
              do {
#line 1004
                  if (0) {
#line 1004
                    printf("WARNING: invalid priority for dequeue %u", sentPrio);
                    }
                }
              while (
#line 1004
              0);
            }
        }
    }


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 1010
    TdmaMacP__phyLock = FALSE;
#line 1010
    __nesc_atomic_end(__nesc_atomic); }
  TdmaMacP__MacSend__sendDone(msg, error);
}

# 189 "../../tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current, msg, err);
    }
  else {
      ;
    }
}

# 110 "../../tos/interfaces/AMSend.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(am_id_t arg_0x7fbb4896b960, message_t * msg, error_t error){
#line 110
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x7fbb4896b960, msg, error);
#line 110
  switch (arg_0x7fbb4896b960) {
#line 110
    case AM_DMAMAC_NOTIFICATION:
#line 110
      TdmaMacP__phyNotificationSend__sendDone(msg, error);
#line 110
      break;
#line 110
    case AM_DMAMAC_DATA:
#line 110
      TdmaMacP__phyDataSend__sendDone(msg, error);
#line 110
      break;
#line 110
  }
#line 110
}
#line 110
# 94 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(msg), msg, error);
}

# 57 "../../tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(message_t *msg, error_t error){
#line 57
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(msg, error);
#line 57
}
#line 57
# 78 "../../tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t result)
{
  /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
  /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(msg, result);
}

# 57 "../../tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(message_t *msg, error_t error){
#line 57
  /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(msg, error);
#line 57
}
#line 57
# 214 "../../tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t result)
{
  if (__nesc_ntoh_leuint8(/*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata) == 0x3f) {
    /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(msg, result);
    }
  else {
#line 219
    /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(msg, result);
    }
}

# 57 "../../tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 57
  /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(msg, error);
#line 57
}
#line 57
# 79 "../../tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(msg, error);
}

# 57 "../../tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 57
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(msg, error);
#line 57
}
#line 57
# 253 "../../tos/chips/rf230/RF230RadioP.nc"
static inline uint16_t RF230RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg)
{
  return (uint16_t )(4960 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
}

# 40 "../../tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(message_t *msg){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = RF230RadioP__RandomCollisionConfig__getInitialBackoff(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 98 "../../tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg)
{
  if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state != /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY || !/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) {
    return EBUSY;
    }
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg = msg;
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST;
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(msg)));

  return SUCCESS;
}

# 49 "../../tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 189 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void )
{
  bool done = FALSE;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  for (; 0; ) ;

  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING && ++/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries <= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__MAX_RETRIES) 
    {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg);
      if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError == SUCCESS) {
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_SEND;
        }
      else {
#line 203
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_RETRY;
        }
    }
  else {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY;
      done = TRUE;
    }

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  if (done) {
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg, /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError);
    }
}

# 96 "../../tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg);
}

# 51 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(message_t *msg){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(msg);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 68 "../../tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(message_t *msg)
{
  return /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(msg);
}

# 45 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(message_t *msg){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = RF230DriverLayerP__RadioPacket__headerLength(msg);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 90 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(msg);
}

# 45 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(message_t *msg){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(msg);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 116 "../../tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(msg);
}

# 45 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(message_t *msg){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(msg);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 284 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(msg) + sizeof(ieee154_simple_header_t );
}

# 45 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(message_t *msg){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(msg);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 91 "../../tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg);
}

# 45 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(message_t *msg){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(msg);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 56 "../../tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(msg);
}

#line 151
static inline message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 55 "../../tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 219 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_panid_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void )
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup();
}

#line 170
static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->destpan.nxdata);
}

# 73 "../../tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 73
{
  return ActiveMessageAddressC__amAddress();
}

# 50 "../../tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 214 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_saddr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void )
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress();
}






static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg)
{
  ieee154_saddr_t addr = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg);

#line 227
  return (addr == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr() || addr == IEEE154_BROADCAST_ADDR)
   && /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(msg) == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan();
}

# 185 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg){
#line 185
  unsigned char __nesc_result;
#line 185

#line 185
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(msg);
#line 185

#line 185
  return __nesc_result;
#line 185
}
#line 185
# 142 "../../tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg)
{
  if (/*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(msg)) {
    return /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(msg, 
    /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(msg), /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(msg));
    }
  else {
#line 148
    return msg;
    }
}

# 44 "../../tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(message_t *msg){
#line 44
  nx_struct message_t *__nesc_result;
#line 44

#line 44
  __nesc_result = /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(msg);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 255 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
static inline message_t */*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 255
{
#line 255
  return msg;
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__Snoop__receive(am_id_t arg_0x7fbb47eba6d0, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__Snoop__default__receive(arg_0x7fbb47eba6d0, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 78 "../../tos/interfaces/Packet.nc"
inline static uint8_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__SubPacket__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 91 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
static inline uint8_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__Packet__payloadLength(message_t *msg)
{
  return /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__SubPacket__payloadLength(msg) - sizeof(timesync_footer_t );
}

#line 73
static __inline timesync_footer_t */*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__getFooter(message_t *msg)
{

  return (timesync_footer_t *)(msg->data + /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__Packet__payloadLength(msg));
}

#line 143
static __inline am_id_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__AMPacket__type(message_t *msg)
{
  return __nesc_ntoh_uint8(/*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__getFooter(msg)->type.nxdata);
}

#line 248
static inline message_t */*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__SubSnoop__receive(message_t *msg, void *payload, uint8_t len)
{
  am_id_t id = /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__AMPacket__type(msg);

  return /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__Snoop__receive(id, msg, payload, len - sizeof(timesync_footer_t ));
}

# 144 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(am_id_t arg_0x7fbb48968890, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x7fbb48968890) {
#line 78
    case 0x3D:
#line 78
      __nesc_result = /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__SubSnoop__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(arg_0x7fbb48968890, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 223 "TdmaMacP.nc"
static inline void TdmaMacP__check_fault_should_be_triggered(uint16_t sink_slot)
#line 223
{
}

# 183 "../../tos/chips/rf230/RF230RadioP.nc"
static inline am_addr_t RF230RadioP__ActiveMessageConfig__source(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__getSrcAddr(msg);
}

# 46 "../../tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__source(message_t *msg){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = RF230RadioP__ActiveMessageConfig__source(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 178 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__source(msg);
}

# 88 "../../tos/interfaces/AMPacket.nc"
inline static am_addr_t TdmaMacP__AMPacket__source(message_t * amsg){
#line 88
  unsigned short __nesc_result;
#line 88

#line 88
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(amsg);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 873 "TdmaMacP.nc"
static inline message_t *TdmaMacP__phyNotificationReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 873
{

  TdmaMacP__src = (am_addr_t )TdmaMacP__AMPacket__source(msg);


  TdmaMacP__notificationPacket = (notification_t *)TdmaMacP__Packet__getPayload(msg, sizeof(notification_t ));

  do {
#line 880
      if (0) {
#line 880
        printf("<Notification-Pkt>RootId: %d \n", __nesc_ntoh_uint16(TdmaMacP__notificationPacket->rootId.nxdata));
        }
    }
  while (
#line 880
  0);
  do {
#line 881
      if (0) {
#line 881
        printf("currentSlot at sink: %d, ", __nesc_ntoh_uint16(TdmaMacP__notificationPacket->sinkSlot.nxdata));
        }
    }
  while (
#line 881
  0);
#line 895
  if (TOS_NODE_ID != 0) {
#line 895
    do {
#line 895
        if (0) {
#line 895
          printf("TimeSyncInfo.getNumEntries = %d\n", TdmaMacP__value);
          }
      }
    while (
#line 895
    0);
    }
  if (TOS_NODE_ID != 0 && TdmaMacP__src == 0) 
    {
      TdmaMacP__check_fault_should_be_triggered(__nesc_ntoh_uint16(TdmaMacP__notificationPacket->sinkSlot.nxdata));


      TdmaMacP__SlotterControl__synchronize(1);

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 904
        {
          if (TdmaMacP__slotterInit == FALSE) {
              TdmaMacP__slotterInit = TRUE;



              TdmaMacP__forwardQueue__clear();
            }
        }
#line 912
        __nesc_atomic_end(__nesc_atomic); }
    }


  do {
#line 916
      if (0) {
#line 916
        printf("  \n");
        }
    }
  while (
#line 916
  0);
  do {
#line 917
      if (0) {
#line 917
        printf("<MAC>: Pkt received from %d \n", TdmaMacP__src);
        }
    }
  while (
#line 917
  0);

  return msg;
}

# 90 "MCCP.nc"
static inline message_t *MCCP__MacReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 90
{


  do {
#line 93
      if (0) {
#line 93
        printf("APP MacReceive.receive: received\n");
        }
    }
  while (
#line 93
  0);
  MCCP__packetsReceived++;
  return msg;
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * TdmaMacP__MacReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = MCCP__MacReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 364 "TdmaMacP.nc"
static inline void TdmaMacP__record_packet_reception(mccpacket *pkt)
#line 364
{
  for (TdmaMacP__i = 50 - 1; TdmaMacP__i > 0; TdmaMacP__i--) {
      TdmaMacP__receptionHistory[TdmaMacP__i] = TdmaMacP__receptionHistory[TdmaMacP__i - 1];
    }
  __nesc_hton_uint16(TdmaMacP__receptionHistory[0].seq_num.nxdata, __nesc_ntoh_uint8(pkt->seq_num.nxdata));
  __nesc_hton_uint8(TdmaMacP__receptionHistory[0].flow_id.nxdata, __nesc_ntoh_uint8(pkt->flow_id.nxdata));
}

#line 233
static inline bool TdmaMacP__mcc_should_receive(action *table, __nesc_nxbase_nx_uint8_t slot)
#line 233
{
  return table[slot] == A_LISTEN;
}

# 73 "../../tos/lib/timer/Timer.nc"
inline static void TdmaMacP__FaultClearTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 73
}
#line 73
# 213 "TdmaMacP.nc"
static inline void TdmaMacP__mcc_fault_triggered(uint8_t slot_timings)
#line 213
{
  if (TdmaMacP__activeFault == FALSE) {

      uint16_t fault_end_delay = slot_timings * 100;

#line 217
      do {
#line 217
          if (0) {
#line 217
            printf("Fault received - %u slots, ending in %u\n", slot_timings, fault_end_delay);
            }
        }
      while (
#line 217
      0);
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 218
        TdmaMacP__activeFault = TRUE;
#line 218
        __nesc_atomic_end(__nesc_atomic); }
      TdmaMacP__FaultClearTimer__startOneShot(fault_end_delay);
    }
}

#line 1021
static inline message_t *TdmaMacP__phyDataReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 1021
{
  nx_uint8_t receivedDest;

  mccpacket *tempPacketReceived;

  uint32_t localTime;

  uint8_t slot;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 1030
    slot = TdmaMacP__currentSlot;
#line 1030
    __nesc_atomic_end(__nesc_atomic); }

  tempPacketReceived = (mccpacket *)TdmaMacP__Packet__getPayload(msg, sizeof(mccpacket ));



  if (__nesc_ntoh_uint8(tempPacketReceived->src.nxdata) == 0x69 && __nesc_ntoh_uint8(tempPacketReceived->dst.nxdata) == 0x23) {

      TdmaMacP__mcc_fault_triggered(__nesc_ntoh_uint8(tempPacketReceived->c.nxdata));
    }
  else 
#line 1039
    {

      __nesc_hton_uint8(receivedDest.nxdata, __nesc_ntoh_uint8(tempPacketReceived->dst.nxdata));

      if (__nesc_ntoh_uint8(receivedDest.nxdata) != TOS_NODE_ID) {

          localTime = TdmaMacP__GlobalTime__getLocalTime();



          if (!TdmaMacP__activeFault) {
              TdmaMacP__mcc_enqueue_to_buffers(tempPacketReceived, localTime);
            }
          else 
#line 1051
            {
              do {
#line 1052
                  if (0) {
#line 1052
                    printf("Fault active - ignoring received packet\n");
                    }
                }
              while (
#line 1052
              0);
            }
        }


      if (!TdmaMacP__mcc_should_receive(TdmaMacP__mccSchedTable, slot)) {

          do {
#line 1059
              if (0) {
#line 1059
                printf("WARNING: Node %d should not have received in slot %u", TOS_NODE_ID, slot);
                }
            }
          while (
#line 1059
          0);
          printfflush();
        }

      if (__nesc_ntoh_uint8(receivedDest.nxdata) == TOS_NODE_ID) {

          TdmaMacP__record_packet_reception(tempPacketReceived);
          TdmaMacP__nbReceivedPkts[__nesc_ntoh_uint8(tempPacketReceived->src.nxdata)]++;
          do {
#line 1067
              if (0) {
#line 1067
                printf("MAC: Packet from %u (last hop %u) is for us on node %u\nSending packet towards app layer\n", __nesc_ntoh_uint8(tempPacketReceived->src.nxdata), __nesc_ntoh_uint8(tempPacketReceived->hop_src.nxdata), TOS_NODE_ID);
                }
            }
          while (
#line 1067
          0);


          return TdmaMacP__MacReceive__receive(msg, payload, len);
        }
    }
  return msg;
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__processMsg__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__processMsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 372 "/home/jharbin/nesc-install/lib/ncc/nesc_nx.h"
static __inline  int32_t __nesc_ntoh_int32(const void * source)
#line 372
{
#line 372
  return __nesc_ntoh_uint32(source);
}

# 61 "../../tos/lib/timer/LocalTime.nc"
inline static uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeMilli__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
inline static uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeRadio__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 72 "../../tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__timestamp(message_t *msg)
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(msg)->timestamp;
}

#line 95
static inline uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__timestamp(message_t *msg)
{
  int32_t offset = /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__timestamp(msg) - /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeRadio__get();

  return (offset >> (5 + MICA_DIVIDE_ONE_FOR_32KHZ_LOG2)) + /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeMilli__get();
}

# 63 "../../tos/interfaces/PacketTimeStamp.nc"
inline static /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__PacketTimeStampMilli__size_type /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__PacketTimeStampMilli__timestamp(message_t * msg){
#line 63
  unsigned long __nesc_result;
#line 63

#line 63
  __nesc_result = /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__timestamp(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 276 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
static inline uint32_t /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncPacketMilli__eventTime(message_t *msg)
{
  return ((int32_t )__nesc_ntoh_int32(/*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__getFooter(msg)->timestamp.relative.nxdata) >> (5 + MICA_DIVIDE_ONE_FOR_32KHZ_LOG2)) + /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__PacketTimeStampMilli__timestamp(msg);
}

# 58 "../../tos/interfaces/TimeSyncPacket.nc"
inline static /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncPacket__size_type /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncPacket__eventTime(message_t *msg){
#line 58
  unsigned long __nesc_result;
#line 58

#line 58
  __nesc_result = /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncPacketMilli__eventTime(msg);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 42 "../../tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__get(message_t *msg){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(1U, msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 67 "../../tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline bool /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__isValid(message_t *msg)
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__get(msg);
}

#line 90
static inline bool /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__isValid(message_t *msg)
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__isValid(msg);
}

# 49 "../../tos/interfaces/PacketTimeStamp.nc"
inline static bool /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__PacketTimeStampMilli__isValid(message_t * msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__isValid(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 271 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
static inline bool /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncPacketMilli__isValid(message_t *msg)
{
  return /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__PacketTimeStampMilli__isValid(msg) && __nesc_ntoh_int32(/*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__getFooter(msg)->timestamp.relative.nxdata) != 0x80000000L;
}

# 48 "../../tos/interfaces/TimeSyncPacket.nc"
inline static bool /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncPacket__isValid(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncPacketMilli__isValid(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 321 "../../tos/lib/ftsp/TimeSyncP.nc"
static inline message_t */*TimeSyncC.TimeSyncP*/TimeSyncP__0__Receive__receive(message_t *msg, void *payload, uint8_t len)
{
#line 334
  if ((
#line 333
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__state & /*TimeSyncC.TimeSyncP*/TimeSyncP__0__STATE_PROCESSING) == 0
   && /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncPacket__isValid(msg)) {
      message_t *old = /*TimeSyncC.TimeSyncP*/TimeSyncP__0__processedMsg;

      /*TimeSyncC.TimeSyncP*/TimeSyncP__0__processedMsg = msg;
      __nesc_hton_uint32(((TimeSyncMsg *)payload)->localTime.nxdata, /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncPacket__eventTime(msg));

      /*TimeSyncC.TimeSyncP*/TimeSyncP__0__state |= /*TimeSyncC.TimeSyncP*/TimeSyncP__0__STATE_PROCESSING;
      /*TimeSyncC.TimeSyncP*/TimeSyncP__0__processMsg__postTask();

      return old;
    }

  return msg;
}

# 246 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
static inline message_t */*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 246
{
#line 246
  return msg;
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__Receive__receive(am_id_t arg_0x7fbb47ebd960, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x7fbb47ebd960) {
#line 78
    case TIMESYNC_AM_FTSP:
#line 78
      __nesc_result = /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Receive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__Receive__default__receive(arg_0x7fbb47ebd960, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 236 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
static inline message_t */*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
{
  if (len >= sizeof(timesync_footer_t )) {
      am_id_t id = /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__AMPacket__type(msg);

      return /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__Receive__receive(id, msg, payload, len - sizeof(timesync_footer_t ));
    }
  else {
#line 243
    return msg;
    }
}

# 139 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(am_id_t arg_0x7fbb4896ac90, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x7fbb4896ac90) {
#line 78
    case AM_DMAMAC_NOTIFICATION:
#line 78
      __nesc_result = TdmaMacP__phyNotificationReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    case AM_DMAMAC_DATA:
#line 78
      __nesc_result = TdmaMacP__phyDataReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    case 0x3D:
#line 78
      __nesc_result = /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(arg_0x7fbb4896ac90, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 55 "../../tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 156 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup(void )
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amGroup();
}

# 131 "../../tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t RF230RadioP__Ieee154PacketLayer__getDestPan(message_t *msg){
#line 131
  unsigned short __nesc_result;
#line 131

#line 131
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(msg);
#line 131

#line 131
  return __nesc_result;
#line 131
}
#line 131
# 193 "../../tos/chips/rf230/RF230RadioP.nc"
static inline am_group_t RF230RadioP__ActiveMessageConfig__group(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__getDestPan(msg);
}

# 52 "../../tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__group(message_t *msg){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = RF230RadioP__ActiveMessageConfig__group(msg);
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 198 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__group(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__group(msg);
}

# 50 "../../tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 151 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void )
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress();
}






static __inline bool /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(message_t *msg)
{
  am_addr_t addr = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(msg);

  return (addr == AM_BROADCAST_ADDR || addr == /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address()) && /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__group(msg) == /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup();
}

# 154 "../../tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg) + /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 45 "../../tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(message_t *msg){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(msg);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 214 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(msg) + sizeof(activemessage_header_t );
}

#line 68
static inline void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(msg);
}

#line 124
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg)
{
  if (/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(msg) >= sizeof(activemessage_header_t )) 
    {
      am_id_t id = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(msg);
      void *payload = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(msg);
      uint8_t len = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);

      msg = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(msg) ? 
      /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(id, msg, payload, len) : 
      /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(id, msg, payload, len);
    }
  return msg;
}

# 44 "../../tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(message_t *msg){
#line 44
  nx_struct message_t *__nesc_result;
#line 44

#line 44
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(msg);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 222 "../../tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg)
{
  if (__nesc_ntoh_leuint8(/*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata) == 0x3f) {
    if (/*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg) >= sizeof(activemessage_header_t )) {
      return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(msg);
      }
    else {
#line 228
      return msg;
      }
    }
  else {
#line 230
    return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(msg);
    }
}

# 44 "../../tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Receive__receive(message_t *msg){
#line 44
  nx_struct message_t *__nesc_result;
#line 44

#line 44
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(msg);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 317 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline message_t */*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubReceive__receive(message_t *msg)
{
  if (/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(msg) >= sizeof(ieee154_simple_header_t )) {
    return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Receive__receive(msg);
    }
  else {
#line 322
    return msg;
    }
}

# 44 "../../tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(message_t *msg){
#line 44
  nx_struct message_t *__nesc_result;
#line 44

#line 44
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubReceive__receive(msg);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 322 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void )
{

  for (; ; ) 
    {
      message_t *msg;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize == 0) {
            {
#line 332
              __nesc_atomic_end(__nesc_atomic); 
#line 332
              return;
            }
            }
#line 334
          msg = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead];
        }
#line 335
        __nesc_atomic_end(__nesc_atomic); }

      msg = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(msg);

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead] = msg;

          if (++/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead >= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
            /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead = 0;
            }
          --/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;
        }
#line 347
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 68 "../../tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void )
{
  error_t result = /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(/*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending);

#line 71
  if (result != SUCCESS) 
    {
      /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
      /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(/*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending, result);
    }
}

# 158 "../../tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id)
#line 158
{
}

# 102 "../../tos/interfaces/Resource.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x7fbb48892df0){
#line 102
  switch (arg_0x7fbb48892df0) {
#line 102
    case 0U:
#line 102
      /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(arg_0x7fbb48892df0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 149 "../../tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 149
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 150
    {
      /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY;
      /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
    }
#line 153
    __nesc_atomic_end(__nesc_atomic); }
  /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
}

# 452 "../../tos/lib/ftsp/TimeSyncP.nc"
static inline error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Init__init(void )
{
  /* atomic removed: atomic calls only */
#line 454
  {
    /*TimeSyncC.TimeSyncP*/TimeSyncP__0__skew = 0.0;
    /*TimeSyncC.TimeSyncP*/TimeSyncP__0__localAverage = 0;
    /*TimeSyncC.TimeSyncP*/TimeSyncP__0__offsetAverage = 0;
  }
#line 458
  ;

  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__clearTable();
  /* atomic removed: atomic calls only */
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg = (TimeSyncMsg *)/*TimeSyncC.TimeSyncP*/TimeSyncP__0__Send__getPayload(&/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsgBuffer, sizeof(TimeSyncMsg ));
  __nesc_hton_uint16(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->rootID.nxdata, 0xFFFF);

  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__processedMsg = &/*TimeSyncC.TimeSyncP*/TimeSyncP__0__processedMsgBuffer;
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__state = /*TimeSyncC.TimeSyncP*/TimeSyncP__0__STATE_INIT;

  return SUCCESS;
}

# 52 "../../tos/system/GenericSlotterP.nc"
static inline error_t GenericSlotterP__Init__init(void )
#line 52
{
  /* atomic removed: atomic calls only */
#line 53
  {
    GenericSlotterP__slotLength = 320;
    GenericSlotterP__frameLength = 17;
    GenericSlotterP__sync = FALSE;
  }
  return SUCCESS;
}

# 55 "../../tos/lib/rfxlink/util/NeighborhoodP.nc"
static inline error_t /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__Init__init(void )
{
  uint8_t i;

  for (i = 0; i < 5; ++i) 
    /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__nodes[i] = AM_BROADCAST_ADDR;

  return SUCCESS;
}

# 55 "../../tos/system/FcfsResourceQueueC.nc"
static inline error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ, /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 62 "../../tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void )
{
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber = TOS_NODE_ID << 4;
  return SUCCESS;
}

# 302 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void )
{
  uint8_t i;

  for (i = 0; i < /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE; ++i) 
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[i] = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData + i;

  return SUCCESS;
}

# 55 "../../tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 181 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__Compare__start(void )
#line 181
{
#line 181
  * (volatile uint8_t *)0x70 |= 1 << 1;
}

# 65 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__start(void ){
#line 65
  HplAtm1281Timer2AsyncP__Compare__start();
#line 65
}
#line 65
# 137 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(uint8_t x)
#line 137
{
  while (* (volatile uint8_t *)0xB6 & (1 << 0)) 
    ;
  * (volatile uint8_t *)0xB1 = ((Atm128_TCCR2B_t )x).flat;
}

# 82 "../../tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlB(uint8_t control){
#line 82
  HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(control);
#line 82
}
#line 82
# 131 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(uint8_t x)
#line 131
{
  while (* (volatile uint8_t *)0xB6 & (1 << 1)) 
    ;
  * (volatile uint8_t *)0xB0 = ((Atm128_TCCR2A_t )x).flat;
}

# 81 "../../tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlA(uint8_t control){
#line 81
  HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(control);
#line 81
}
#line 81
# 266 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void )
#line 266
{
  * (volatile uint8_t *)0xB6 |= 1 << 5;
}

# 68 "../../tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__setTimer2Asynchronous(void ){
#line 68
  HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous();
#line 68
}
#line 68
# 89 "../../tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init(void )
#line 89
{
  /* atomic removed: atomic calls only */
  {
    Atm128_TCCR2A_t x;
    Atm128_TCCR2B_t y;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__setTimer2Asynchronous();
    x.flat = 0;
    x.bits.wgm21 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlA(x.flat);
    y.flat = 0;
    y.bits.cs = 3;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlB(y.flat);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt();
  return SUCCESS;
}

# 88 "../../tos/interfaces/Resource.nc"
inline static error_t RF230DriverLayerP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__request(0U);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 236 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline error_t RF230DriverLayerP__SoftwareInit__init(void )
{

  return RF230DriverLayerP__SpiResource__request();
}

# 55 "../../tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void )
#line 55
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ);
  return SUCCESS;
}

# 109 "../../tos/lib/printf/PrintfP.nc"
static inline error_t PrintfP__Init__init(void )
#line 109
{
  /* atomic removed: atomic calls only */
#line 110
  PrintfP__state = PrintfP__S_STARTED;
  return SUCCESS;
}

# 216 "../../tos/lib/serial/SerialP.nc"
static __inline void SerialP__ackInit(void )
#line 216
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

#line 207
static __inline void SerialP__rxInit(void )
#line 207
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_INACTIVE;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

#line 195
static __inline void SerialP__txInit(void )
#line 195
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 197
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_INACTIVE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

#line 220
static inline error_t SerialP__Init__init(void )
#line 220
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

  return SUCCESS;
}

# 69 "../../tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void )
#line 69
{
  if (PLATFORM_BAUDRATE == 19200UL) {
    /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 200;
    }
  else {
#line 72
    if (PLATFORM_BAUDRATE == 57600UL) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 68;
      }
    }
#line 74
  return SUCCESS;
}

# 154 "../../tos/platforms/iris/MeasureClockC.nc"
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate)
#line 154
{

  return ((uint32_t )MeasureClockC__cycles << 12) / baudrate - 1;
}

# 60 "../../tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate){
#line 60
  unsigned short __nesc_result;
#line 60

#line 60
  __nesc_result = MeasureClockC__Atm128Calibrate__baudrateRegister(baudrate);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 224 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1Init__init(void )
#line 224
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr1 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0xCC = ubrr1;
  * (volatile uint8_t *)0xCD = ubrr1 >> 8;
  * (volatile uint8_t *)0xC8 = stts.flat;
  * (volatile uint8_t *)0xCA = mode.flat;
  * (volatile uint8_t *)0XC9 = ctrl.flat;

  return SUCCESS;
}

#line 130
static inline error_t HplAtm128UartP__Uart0Init__init(void )
#line 130
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr0 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0xC4 = ubrr0;
  * (volatile uint8_t *)0xC5 = ubrr0 >> 8;
  * (volatile uint8_t *)0xC0 = stts.flat;
  * (volatile uint8_t *)0xC2 = mode.flat;
  * (volatile uint8_t *)0XC1 = ctrl.flat;

  return SUCCESS;
}

# 98 "../../tos/lib/printf/PutcharP.nc"
static inline error_t PutcharP__Init__init(void )
#line 98
{
  error_t rv = SUCCESS;

  __iob[1] = &atm128_stdout;

  return rv;
}

# 62 "../../tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PutcharP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart0Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart1Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PrintfP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RF230DriverLayerP__SoftwareInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RF230RadioC.NeighborhoodC.NeighborhoodP*/NeighborhoodP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, GenericSlotterP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 52 "../../tos/interfaces/Random.nc"
inline static uint16_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 154 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 64 "../../tos/lib/timer/Timer.nc"
inline static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Timer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(2U, dt);
#line 64
}
#line 64
# 429 "../../tos/lib/ftsp/TimeSyncP.nc"
static inline error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncMode__setMode(uint8_t mode_)
#line 429
{
  if (mode_ == TS_TIMER_MODE) {
      /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Timer__startPeriodic((uint32_t )(896U + (/*TimeSyncC.TimeSyncP*/TimeSyncP__0__Random__rand16() & 0xFF)) * /*TimeSyncC.TimeSyncP*/TimeSyncP__0__BEACON_RATE);
    }
  else {
    /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Timer__stop();
    }
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__mode = mode_;
  return SUCCESS;
}

#line 478
static inline error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__StdControl__start(void )
{
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__heartBeats = 0;
  __nesc_hton_uint16(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->nodeID.nxdata, TOS_NODE_ID);

  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__TimeSyncMode__setMode(TS_USER_MODE);
  return SUCCESS;
}

# 104 "../../tos/interfaces/SplitControl.nc"
inline static error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__RadioControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 471 "../../tos/lib/ftsp/TimeSyncP.nc"
static inline void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Boot__booted(void )
{

  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__RadioControl__start();
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__StdControl__start();
}

# 455 "TdmaMacP.nc"
static inline error_t TdmaMacP__MacPowerControl__start(void )
#line 455
{

  error_t err;

#line 458
  if (TdmaMacP__init == FALSE) {
    }

  err = TdmaMacP__RadioPowerControl__start();
  do {
#line 462
      if (0) {
#line 462
        printf("<Mac>: We are up and running \n");
        }
    }
  while (
#line 462
  0);
  return err;
}

# 104 "../../tos/interfaces/SplitControl.nc"
inline static error_t MCCP__MacControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = TdmaMacP__MacPowerControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 51 "MCCP.nc"
static inline void MCCP__Boot__booted(void )
#line 51
{
  MCCP__sends = FALSE;
  MCCP__packetsSent = 0;
  MCCP__packetsReceived = 0;
  do {
#line 55
      if (0) {
#line 55
        printf("APP: Attempting to start \n");
        }
    }
  while (
#line 55
  0);
  MCCP__MacControl__start();
}

# 61 "../../tos/system/GenericSlotterP.nc"
static inline void GenericSlotterP__Boot__booted(void )
{
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 348 "../../tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SplitControl__start(void )
#line 348
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP__txState != SerialP__TXSTATE_INACTIVE && SerialP__rxState != SerialP__RXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 351
          EALREADY;

          {
#line 351
            __nesc_atomic_end(__nesc_atomic); 
#line 351
            return __nesc_temp;
          }
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
#line 353
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

# 104 "../../tos/interfaces/SplitControl.nc"
inline static error_t SerialStartP__SerialControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = SerialP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 44 "../../tos/lib/printf/SerialStartP.nc"
static inline void SerialStartP__Boot__booted(void )
#line 44
{
  SerialStartP__SerialControl__start();
}

# 52 "TXFlowP.nc"
static inline void /*MCCC.TXFlow1.TXF*/TXFlowP__0__Boot__booted(void )
#line 52
{
  do {
#line 53
      if (0) {
#line 53
        printf("TXFlowP: booting flow %u...\n", 1);
        }
    }
  while (
#line 53
  0);
  printfflush();
  /*MCCC.TXFlow1.TXF*/TXFlowP__0__packetsSent = 0;

  /*MCCC.TXFlow1.TXF*/TXFlowP__0__SendTimer__startOneShot(1000 + (uint32_t )115 * 1);
  return;
}

#line 52
static inline void /*MCCC.TXFlow2.TXF*/TXFlowP__1__Boot__booted(void )
#line 52
{
  do {
#line 53
      if (0) {
#line 53
        printf("TXFlowP: booting flow %u...\n", 2);
        }
    }
  while (
#line 53
  0);
  printfflush();
  /*MCCC.TXFlow2.TXF*/TXFlowP__1__packetsSent = 0;

  /*MCCC.TXFlow2.TXF*/TXFlowP__1__SendTimer__startOneShot(1000 + (uint32_t )115 * 2);
  return;
}

# 60 "../../tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  /*MCCC.TXFlow2.TXF*/TXFlowP__1__Boot__booted();
#line 60
  /*MCCC.TXFlow1.TXF*/TXFlowP__0__Boot__booted();
#line 60
  SerialStartP__Boot__booted();
#line 60
  GenericSlotterP__Boot__booted();
#line 60
  MCCP__Boot__booted();
#line 60
  /*TimeSyncC.TimeSyncP*/TimeSyncP__0__Boot__booted();
#line 60
}
#line 60
# 219 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline mcu_power_t HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState(void )
#line 219
{
  uint8_t diff;


  if (* (volatile uint8_t *)0x70 & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)0xB6 & (((1 << 4) | (1 << 3)) | (1 << 1))) 
        ;
      diff = * (volatile uint8_t *)0xB3 - * (volatile uint8_t *)0xB2;
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)0xB2 > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 234
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 62 "../../tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 105 "../../tos/chips/atm1281/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 105
{










  if ((
#line 115
  * (volatile uint8_t *)0x6E & ((1 << 1) | (1 << 2)) || 
  * (volatile uint8_t *)0x6F & ((((1 << 5) | (1 << 1)) | (1 << 2)) | (1 << 3))) || 
  * (volatile uint8_t *)0x71 & ((((1 << 5) | (1 << 1)) | (1 << 2)) | (1 << 3))) 
    {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x2C + 0x20) & (1 << 7)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if (* (volatile uint8_t *)0XC1 & ((1 << 3) | (1 << 4))) {
          return ATM128_POWER_IDLE;
        }
      else {
#line 129
        if (* (volatile uint8_t *)0XC9 & ((1 << 3) | (1 << 4))) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0xBC & (1 << 2)) {
              return ATM128_POWER_IDLE;
            }
          else {
            if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x7A & (1 << 7)) {
                return ATM128_POWER_ADC_NR;
              }
            else {
                return ATM128_POWER_DOWN;
              }
            }
          }
        }
      }
    }
}

# 142 "../../tos/chips/atm1281/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 142
{
  return m1 < m2 ? m1 : m2;
}

# 145 "../../tos/chips/atm1281/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
#line 145
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC__getPowerState(), McuSleepC__McuPowerOverride__lowestState());
  * (volatile uint8_t *)(0x33 + 0x20) = ((
  * (volatile uint8_t *)(0x33 + 0x20) & 0xf0) | (1 << 0)) | __extension__ ({
#line 150
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[powerState];
#line 150
    uint8_t __result;

#line 150
     __asm volatile ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 151
   __asm volatile ("sei" :  :  : "memory");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli" :  :  : "memory");

  * (volatile uint8_t *)(0x33 + 0x20) &= ~(1 << 0);
}

# 79 "../../tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 79
  McuSleepC__McuSleep__sleep();
#line 79
}
#line 79
# 78 "../../tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "../../tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 78 "../../tos/lib/timer/Alarm.nc"
inline static void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__fired(void ){
#line 78
  GenericSlotterP__Alarm__fired();
#line 78
}
#line 78
# 162 "../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt == 0) 
        {
          /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__fired();
        }
      else 
        {
          /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm();
        }
    }
#line 174
    __nesc_atomic_end(__nesc_atomic); }
}

# 78 "../../tos/lib/timer/Alarm.nc"
inline static void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__fired(void ){
#line 78
  /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 119 "../../tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void )
#line 119
{
  /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop();
  ;
  /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__fired();
}

# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer1P__CompareA__fired(void ){
#line 58
  /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired();
#line 58
}
#line 58
# 59 "../../tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule(void ){
#line 59
  /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__schedule();
#line 59
}
#line 59
# 90 "../../tos/chips/atm1281/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 90
{
   __asm volatile ("sei" :  :  : "memory");}

# 76 "../../tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void )
{
  __nesc_enable_interrupt();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_WAIT) {
        /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_FIRED;
        }
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule();
}

# 78 "../../tos/lib/timer/Alarm.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__fired(void ){
#line 78
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired();
#line 78
}
#line 78
# 119 "../../tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__fired(void )
#line 119
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__stop();
  ;
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__fired();
}

# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer1P__CompareB__fired(void ){
#line 58
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__fired();
#line 58
}
#line 58
# 233 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareC__default__fired(void )
#line 233
{
}

# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer1P__CompareC__fired(void ){
#line 58
  HplAtm1281Timer1P__CompareC__default__fired();
#line 58
}
#line 58
# 697 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__IRQ__captured(uint16_t time)
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      RF230DriverLayerP__capturedTime = time;
      RF230DriverLayerP__radioIrq = TRUE;
    }
#line 705
    __nesc_atomic_end(__nesc_atomic); }

  RF230DriverLayerP__Tasklet__schedule();
}

# 61 "../../tos/interfaces/GpioCapture.nc"
inline static void HplRF230P__IRQ__captured(uint16_t time){
#line 61
  RF230DriverLayerP__IRQ__captured(time);
#line 61
}
#line 61
# 219 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint16_t HplAtm1281Timer1P__Capture__get(void )
#line 219
{
#line 219
  return * (volatile uint16_t *)0x86;
}

# 47 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static HplRF230P__Capture__size_type HplRF230P__Capture__get(void ){
#line 47
  unsigned short __nesc_result;
#line 47

#line 47
  __nesc_result = HplAtm1281Timer1P__Capture__get();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 64 "../../tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline void HplRF230P__Capture__captured(uint16_t time)
{
  time = HplRF230P__Capture__get();
  HplRF230P__IRQ__captured(time);
}

# 60 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm1281Timer1P__Capture__captured(HplAtm1281Timer1P__Capture__size_type t){
#line 60
  HplRF230P__Capture__captured(t);
#line 60
}
#line 60
# 125 "../../tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void )
#line 125
{
}

# 60 "../../tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void )
#line 60
{
}

# 177 "../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow(void )
{
}

# 82 "../../tos/lib/timer/Counter.nc"
inline static void /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "../../tos/lib/timer/TransformCounterC.nc"
static inline void /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper++;
      if ((/*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper & /*Counter32khz32C.Transform32*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
        /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__overflow();
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
}

# 58 "../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

# 82 "../../tos/lib/timer/Counter.nc"
inline static void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__Counter__overflow(void ){
#line 82
  /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow();
#line 82
}
#line 82
# 133 "../../tos/lib/timer/TransformCounterC.nc"
static inline void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__m_upper++;
      if ((/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__m_upper & /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__OVERFLOW_MASK) == 0) {
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__Counter__overflow();
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
}

# 82 "../../tos/lib/timer/Counter.nc"
inline static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void ){
#line 82
  /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow();
#line 82
  /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 65 "../../tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void )
{
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow();
}

# 125 "../../tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__overflow(void )
#line 125
{
}

# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm1281Timer1P__Timer__overflow(void ){
#line 70
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__overflow();
#line 70
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow();
#line 70
  /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow();
#line 70
  /*GenericSlotterC.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow();
#line 70
}
#line 70
# 204 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static __inline void HplAtm1281Timer2AsyncP__stabiliseTimer2(void )
#line 204
{
  * (volatile uint8_t *)0xB0 = * (volatile uint8_t *)0xB0;
  while (* (volatile uint8_t *)0xB6 & (1 << 1)) 
    ;
}

# 58 "../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 82 "../../tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 191 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__Compare__get(void )
#line 191
{
#line 191
  return * (volatile uint8_t *)0xB3;
}

# 48 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = HplAtm1281Timer2AsyncP__Compare__get();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 187 "../../tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired(void )
#line 187
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__overflow();
    }
}

# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer2AsyncP__Compare__fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired();
#line 58
}
#line 58
# 268 "../../tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow(void )
#line 268
{
}

# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm1281Timer2AsyncP__Timer__overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow();
#line 70
}
#line 70
# 113 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__enableInterrupt(bool enabled){
#line 113
  HplAtm128SpiP__SPI__enableInterrupt(enabled);
#line 113
}
#line 113
# 249 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__sendNextPart(void )
#line 249
{
  uint16_t end;
  uint16_t tmpPos;
  uint16_t myLen;
  uint8_t * tx;
  uint8_t * rx;

  /* atomic removed: atomic calls only */
#line 256
  {
    myLen = Atm128SpiP__len;
    tx = Atm128SpiP__txBuffer;
    rx = Atm128SpiP__rxBuffer;
    tmpPos = Atm128SpiP__pos;
    end = Atm128SpiP__pos + Atm128SpiP__SPI_ATOMIC_SIZE;
    end = end > Atm128SpiP__len ? Atm128SpiP__len : end;
  }

  for (; tmpPos < end - 1; tmpPos++) {
      uint8_t val;

#line 267
      if (tx != (void *)0) {
        val = Atm128SpiP__SpiByte__write(tx[tmpPos]);
        }
      else {
#line 270
        val = Atm128SpiP__SpiByte__write(0);
        }
      if (rx != (void *)0) {
          rx[tmpPos] = val;
        }
    }



  Atm128SpiP__Spi__enableInterrupt(TRUE);
  /* atomic removed: atomic calls only */
#line 280
  {
    if (tx != (void *)0) {
      Atm128SpiP__Spi__write(tx[tmpPos]);
      }
    else {
#line 284
      Atm128SpiP__Spi__write(0);
      }
    Atm128SpiP__pos = tmpPos;
  }


  return SUCCESS;
}

#line 352
static inline void Atm128SpiP__Spi__dataReady(uint8_t data)
#line 352
{
  bool again;

  /* atomic removed: atomic calls only */
#line 355
  {
    if (Atm128SpiP__rxBuffer != (void *)0) {
        Atm128SpiP__rxBuffer[Atm128SpiP__pos] = data;
      }

    Atm128SpiP__pos++;
  }
  Atm128SpiP__Spi__enableInterrupt(FALSE);
  /* atomic removed: atomic calls only */
  {
    again = Atm128SpiP__pos < Atm128SpiP__len;
  }

  if (again) {
      Atm128SpiP__sendNextPart();
    }
  else {
      uint8_t discard;
      uint16_t myLen;
      uint8_t * rx;
      uint8_t * tx;

      /* atomic removed: atomic calls only */
#line 377
      {
        myLen = Atm128SpiP__len;
        rx = Atm128SpiP__rxBuffer;
        tx = Atm128SpiP__txBuffer;
        Atm128SpiP__rxBuffer = (void *)0;
        Atm128SpiP__txBuffer = (void *)0;
        Atm128SpiP__len = 0;
        Atm128SpiP__pos = 0;
      }
      discard = Atm128SpiP__Spi__read();

      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
}

# 109 "../../tos/chips/atm128/spi/Atm128Spi.nc"
inline static void HplAtm128SpiP__SPI__dataReady(uint8_t data){
#line 109
  Atm128SpiP__Spi__dataReady(data);
#line 109
}
#line 109
# 397 "../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
#line 397
{
  SerialP__rx_state_machine(FALSE, data);
}

# 94 "../../tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
#line 94
  SerialP__SerialFrameComm__dataReceived(data);
#line 94
}
#line 94
# 394 "../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
#line 394
{
  SerialP__rx_state_machine(TRUE, 0);
}

# 85 "../../tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
#line 85
  SerialP__SerialFrameComm__delimiterReceived();
#line 85
}
#line 85
# 73 "../../tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data)
#line 73
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
#line 85
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
#line 90
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 95
  HdlcTranslateC__SerialFrameComm__dataReceived(data);
}

# 79 "../../tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte){
#line 79
  HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
}
#line 79
# 132 "../../tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 132
{
}

# 99 "../../tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
}
#line 99
# 133 "../../tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data)
#line 133
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos++] = data;
      if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos >= /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len) {
          uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;

          /* atomic removed: atomic calls only */
#line 139
          {
            /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf = (void *)0;
            if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr != 3) {
                /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
                /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
              }
          }
          /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(data);
    }
}

# 49 "../../tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__rxDone(uint8_t data){
#line 49
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(data);
#line 49
}
#line 49
# 401 "../../tos/lib/serial/SerialP.nc"
static inline bool SerialP__valid_rx_proto(uint8_t proto)
#line 401
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          return TRUE;
      case SERIAL_PROTO_ACK: 
        default: 
          return FALSE;
    }
}

# 203 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
#line 203
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

#line 199
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
#line 199
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

#line 226
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void )
#line 226
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 228
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 62 "../../tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP__ReceiveBytePacket__startPacket(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 311 "../../tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP__rx_current_crc(void )
#line 311
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

#line 314
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 80 "../../tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 80
}
#line 80
# 221 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 221
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 234 "../../tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_full(void )
#line 234
{
  uint8_t tmp;
#line 235
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 236
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
#line 240
    tmp = 0;
    }
#line 241
  return tmp == tmp2;
}







static __inline void SerialP__ack_queue_push(uint8_t token)
#line 250
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 252
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
#line 254
          SerialP__ackQ.writePtr = 0;
          }
      }
#line 256
      SerialP__MaybeScheduleTx();
    }
}

# 67 "../../tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
#line 67
{
  HdlcTranslateC__state.receiveEscape = 0;
}

# 79 "../../tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP__SerialFrameComm__resetReceive(void ){
#line 79
  HdlcTranslateC__SerialFrameComm__resetReceive();
#line 79
}
#line 79
# 244 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
#line 244
{
  /* atomic removed: atomic calls only */
#line 245
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
#line 266
            ;
      }
  }
}

# 69 "../../tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 69
}
#line 69
# 301 "../../tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP__rx_buffer_top(void )
#line 301
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 303
  return tmp;
}

#line 305
static __inline uint8_t SerialP__rx_buffer_pop(void )
#line 305
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 307
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 307
    SerialP__rxBuf.readPtr = 0;
    }
#line 308
  return tmp;
}

#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data)
#line 297
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 299
    SerialP__rxBuf.writePtr = 0;
    }
}

# 65 "../../tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putData(uint8_t data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = HdlcTranslateC__SerialFrameComm__putData(data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 530 "../../tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__completeSend(void )
#line 530
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 532
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 71 "../../tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = SerialP__SendBytePacket__completeSend();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 178 "../../tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
#line 178
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 181
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 81 "../../tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP__SendBytePacket__nextByte(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 669 "../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__putDone(void )
#line 669
{
  {
    error_t txResult = SUCCESS;

    /* atomic removed: atomic calls only */
#line 672
    {
      switch (SerialP__txState) {

          case SerialP__TXSTATE_PROTO: 

            txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

          SerialP__txState = SerialP__TXSTATE_INFO;



          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
          break;

          case SerialP__TXSTATE_SEQNO: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
          SerialP__txState = SerialP__TXSTATE_INFO;
          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
          break;

          case SerialP__TXSTATE_INFO: 
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 700
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
          break;

          case SerialP__TXSTATE_FCS1: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
          SerialP__txState = SerialP__TXSTATE_FCS2;
          break;

          case SerialP__TXSTATE_FCS2: 
            txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
          SerialP__txState = SerialP__TXSTATE_ENDFLAG;
          break;

          case SerialP__TXSTATE_ENDFLAG: 
            txResult = SerialP__SerialFrameComm__putDelimiter();
          SerialP__txState = SerialP__TXSTATE_ENDWAIT;
          break;

          case SerialP__TXSTATE_ENDWAIT: 
            SerialP__txState = SerialP__TXSTATE_FINISH;
          case SerialP__TXSTATE_FINISH: 
            SerialP__MaybeScheduleTx();
          break;
          case SerialP__TXSTATE_ERROR: 
            default: 
              txResult = FAIL;
          break;
        }

      if (txResult != SUCCESS) {
          SerialP__txState = SerialP__TXSTATE_ERROR;
          SerialP__MaybeScheduleTx();
        }
    }
  }
}

# 100 "../../tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
#line 100
  SerialP__SerialFrameComm__putDone();
#line 100
}
#line 100
# 48 "../../tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 118 "../../tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 119
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 120
    {
      if (HdlcTranslateC__state.sendEscape) {
          HdlcTranslateC__state.sendEscape = 0;
          HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
          HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
        }
      else {
          HdlcTranslateC__SerialFrameComm__putDone();
        }
    }
#line 129
    __nesc_atomic_end(__nesc_atomic); }
}

# 57 "../../tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
}
#line 57
# 46 "../../tos/chips/atm128/HplAtm128Uart.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data){
#line 46
  HplAtm128UartP__HplUart0__tx(data);
#line 46
}
#line 46
# 173 "../../tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void )
#line 173
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos < /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;

#line 180
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = (void *)0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len, SUCCESS);
    }
}

# 47 "../../tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__txDone(void ){
#line 47
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone();
#line 47
}
#line 47
# 320 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data)
#line 320
{
}

# 49 "../../tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__rxDone(uint8_t data){
#line 49
  HplAtm128UartP__HplUart1__default__rxDone(data);
#line 49
}
#line 49
# 319 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__txDone(void )
#line 319
{
}

# 47 "../../tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__txDone(void ){
#line 47
  HplAtm128UartP__HplUart1__default__txDone();
#line 47
}
#line 47
# 225 "../../tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__CompareA__default__fired(void )
#line 225
{
}

# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer3P__CompareA__fired(void ){
#line 58
  HplAtm1281Timer3P__CompareA__default__fired();
#line 58
}
#line 58
# 229 "../../tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__CompareB__default__fired(void )
#line 229
{
}

# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer3P__CompareB__fired(void ){
#line 58
  HplAtm1281Timer3P__CompareB__default__fired();
#line 58
}
#line 58
# 233 "../../tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__CompareC__default__fired(void )
#line 233
{
}

# 58 "../../tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer3P__CompareC__fired(void ){
#line 58
  HplAtm1281Timer3P__CompareC__default__fired();
#line 58
}
#line 58
# 237 "../../tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P__Capture__default__captured(uint16_t time)
#line 237
{
}

# 60 "../../tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm1281Timer3P__Capture__captured(HplAtm1281Timer3P__Capture__size_type t){
#line 60
  HplAtm1281Timer3P__Capture__default__captured(t);
#line 60
}
#line 60
# 219 "../../tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline uint16_t HplAtm1281Timer3P__Capture__get(void )
#line 219
{
#line 219
  return * (volatile uint16_t *)0x96;
}

# 231 "../../tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void )
#line 231
{
}

# 82 "../../tos/lib/timer/Counter.nc"
inline static void /*CounterMicro32C.Transform32*/TransformCounterC__2__Counter__overflow(void ){
#line 82
  /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow();
#line 82
}
#line 82
# 133 "../../tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__2__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMicro32C.Transform32*/TransformCounterC__2__m_upper++;
      if ((/*CounterMicro32C.Transform32*/TransformCounterC__2__m_upper & /*CounterMicro32C.Transform32*/TransformCounterC__2__OVERFLOW_MASK) == 0) {
        /*CounterMicro32C.Transform32*/TransformCounterC__2__Counter__overflow();
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
}

# 82 "../../tos/lib/timer/Counter.nc"
inline static void /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__overflow(void ){
#line 82
  /*CounterMicro32C.Transform32*/TransformCounterC__2__CounterFrom__overflow();
#line 82
}
#line 82
# 65 "../../tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__overflow(void )
{
  /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__overflow();
}

# 60 "../../tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__overflow(void )
#line 60
{
}

# 70 "../../tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm1281Timer3P__Timer__overflow(void ){
#line 70
  /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__overflow();
#line 70
  /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__overflow();
#line 70
}
#line 70
# 65 "../../tos/system/QueueC.nc"
static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__maxSize(void )
#line 65
{
  return 250;
}

#line 61
static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__size(void )
#line 61
{
  return /*PrintfC.QueueC*/QueueC__0__size;
}

#line 101
static inline error_t /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(/*PrintfC.QueueC*/QueueC__0__queue_t newVal)
#line 101
{
  if (/*PrintfC.QueueC*/QueueC__0__Queue__size() < /*PrintfC.QueueC*/QueueC__0__Queue__maxSize()) {
      ;
      /*PrintfC.QueueC*/QueueC__0__queue[/*PrintfC.QueueC*/QueueC__0__tail] = newVal;
      /*PrintfC.QueueC*/QueueC__0__tail++;
      if (/*PrintfC.QueueC*/QueueC__0__tail == 250) {
#line 106
        /*PrintfC.QueueC*/QueueC__0__tail = 0;
        }
#line 107
      /*PrintfC.QueueC*/QueueC__0__size++;
      /*PrintfC.QueueC*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 97 "../../tos/interfaces/Queue.nc"
inline static error_t PrintfP__Queue__enqueue(PrintfP__Queue__t  newVal){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(newVal);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 65
inline static uint8_t PrintfP__Queue__size(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__size();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 152 "../../tos/lib/printf/PrintfP.nc"
static inline int PrintfP__Putchar__putchar(int c)
{
  if (PrintfP__state == PrintfP__S_STARTED && PrintfP__Queue__size() >= 250 / 2) {
      PrintfP__state = PrintfP__S_FLUSHING;
      PrintfP__sendNext();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 158
    {
      if (PrintfP__Queue__enqueue(c) == SUCCESS) 
        {
          int __nesc_temp = 
#line 160
          0;

          {
#line 160
            __nesc_atomic_end(__nesc_atomic); 
#line 160
            return __nesc_temp;
          }
        }
      else 
#line 161
        {
          int __nesc_temp = 
#line 161
          -1;

          {
#line 161
            __nesc_atomic_end(__nesc_atomic); 
#line 161
            return __nesc_temp;
          }
        }
    }
#line 164
    __nesc_atomic_end(__nesc_atomic); }
}

# 49 "../../tos/lib/printf/Putchar.nc"
inline static int PutcharP__Putchar__putchar(int c){
#line 49
  int __nesc_result;
#line 49

#line 49
  __nesc_result = PrintfP__Putchar__putchar(c);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 63 "../../tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
#line 71
        * (volatile uint8_t *)(0x34 + 0x20) = 0;
#line 71
        wdt_disable();
      }
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 134 "../../tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x7fbb491f3b80){
#line 75
  switch (arg_0x7fbb491f3b80) {
#line 75
    case /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 75
      /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask:
#line 75
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask:
#line 75
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask:
#line 75
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom:
#line 75
      /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case RF230DriverLayerP__releaseSpi:
#line 75
      RF230DriverLayerP__releaseSpi__runTask();
#line 75
      break;
#line 75
    case Atm128SpiP__zeroTask:
#line 75
      Atm128SpiP__zeroTask__runTask();
#line 75
      break;
#line 75
    case /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask:
#line 75
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*TimeSyncC.TimeSyncP*/TimeSyncP__0__processMsg:
#line 75
      /*TimeSyncC.TimeSyncP*/TimeSyncP__0__processMsg__runTask();
#line 75
      break;
#line 75
    case /*TimeSyncC.TimeSyncP*/TimeSyncP__0__sendMsg:
#line 75
      /*TimeSyncC.TimeSyncP*/TimeSyncP__0__sendMsg__runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask();
#line 75
      break;
#line 75
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask:
#line 75
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask();
#line 75
      break;
#line 75
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask:
#line 75
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask();
#line 75
      break;
#line 75
    case SerialP__RunTx:
#line 75
      SerialP__RunTx__runTask();
#line 75
      break;
#line 75
    case SerialP__startDoneTask:
#line 75
      SerialP__startDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__stopDoneTask:
#line 75
      SerialP__stopDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__defaultSerialFlushTask:
#line 75
      SerialP__defaultSerialFlushTask__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
#line 75
      break;
#line 75
    case PrintfP__retrySend:
#line 75
      PrintfP__retrySend__runTask();
#line 75
      break;
#line 75
    case /*MCCC.TXFlow1.TXF*/TXFlowP__0__send:
#line 75
      /*MCCC.TXFlow1.TXF*/TXFlowP__0__send__runTask();
#line 75
      break;
#line 75
    case /*MCCC.TXFlow2.TXF*/TXFlowP__1__send:
#line 75
      /*MCCC.TXFlow2.TXF*/TXFlowP__1__send__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x7fbb491f3b80);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 266 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(message_t *msg, uint8_t len)
{
  if (len > /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength()) {
    return (void *)0;
    }
  return (void *)msg + /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(msg);
}

# 99 "MCCP.nc"
static error_t MCCP__FlowSend__send(message_t *msg, uint8_t len)
#line 99
{
  error_t code;

  code = MCCP__MacSend__send(msg, len);


  if (code != SUCCESS) {
      do {
#line 106
          if (0) {
#line 106
            printf("APP: FlowSend failed\n");
            }
        }
      while (
#line 106
      0);
    }
  else 
#line 107
    {
      do {
#line 108
          if (0) {
#line 108
            printf("APP: FlowSend to MAC OK\n");
            }
        }
      while (
#line 108
      0);
    }
  MCCP__FlowSend__sendDone(msg, code);
  return code;
}

# 199 "../../tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get(void )
#line 199
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get();

      if (((Atm128_TIFR2_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag()).bits.ocfa) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base + now8;
        }
    }
#line 217
    __nesc_atomic_end(__nesc_atomic); }
#line 217
  return now;
}

# 719 "TdmaMacP.nc"
static error_t TdmaMacP__mcc_enqueue_to_buffers(mccpacket *packetToEnqueue, uint32_t injectTime)
#line 719
{
  mccpacket *bufferPkt = (void *)0;


  uint8_t prio = 0;
  uint8_t size = 0;

  prio = __nesc_ntoh_uint8(packetToEnqueue->priority.nxdata);

  if (prio >= 1 && prio <= 3) {
      size = (uint8_t )TdmaMacP__forwardQueue__sizePrio(prio);
      bufferPkt = (mccpacket *)TdmaMacP__Packet__getPayload(&TdmaMacP__forwardPktBuffer[size][prio], sizeof(mccpacket ));
      memcpy(bufferPkt, packetToEnqueue, sizeof(mccpacket ));


      __nesc_hton_uint8(bufferPkt->local_retransmits.nxdata, 0);

      __nesc_hton_uint16(bufferPkt->enqueueSlot.nxdata, __nesc_ntoh_uint16(TdmaMacP__localSlot.nxdata));


      __nesc_hton_uint32(bufferPkt->inject_time.nxdata, injectTime);
    }
  else 




    {
      do {
#line 747
          if (0) {
#line 747
            printf("WARNING: mcc_enqueue_to_buffers - wrong priority packet\n");
            }
        }
      while (
#line 747
      0);
      bufferPkt = (void *)0;
    }


  if (bufferPkt != (void *)0) {
      TdmaMacP__forwardQueue__enqueue(bufferPkt, __nesc_ntoh_uint8(bufferPkt->priority.nxdata));
#line 767
      return SUCCESS;
    }
  else 
#line 768
    {

      return FAIL;
    }
}

# 120 "PrioCritQueueP.nc"
static uint8_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__sizePrio(uint8_t prio)
#line 120
{
  switch (prio) {
      case 1: return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__size();
      case 2: return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__size();
      case 3: return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__size();
      default: return 0;
    }
}

# 53 "../../tos/system/AMQueueEntryP.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(msg, dest);
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(msg, 100);
  return /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__send(msg, len);
}

# 172 "../../tos/lib/serial/SerialActiveMessageP.nc"
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg)
#line 172
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 174
  return __nesc_ntoh_uint8(header->type.nxdata);
}

#line 148
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg)
#line 148
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 150
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

#line 68
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 70
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_uint16(header->dest.nxdata, dest);





  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint8(header->length.nxdata, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(msg, len);
}

# 519 "../../tos/lib/serial/SerialP.nc"
static void SerialP__MaybeScheduleTx(void )
#line 519
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 520
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
#line 526
    __nesc_atomic_end(__nesc_atomic); }
}

# 170 "../../tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 174 "../../tos/system/AMQueueImplP.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend(void )
#line 174
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__nextPacket();
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg;
      am_id_t nextId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(nextMsg);
      uint8_t len = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__payloadLength(nextMsg);

#line 182
      nextErr = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__postTask();
        }
    }
}

# 142 "../../tos/lib/printf/PrintfP.nc"
static void PrintfP__AMSend__sendDone(message_t *msg, error_t error)
#line 142
{
  if (error == SUCCESS) {
      if (PrintfP__Queue__size() > 0) {
        PrintfP__sendNext();
        }
      else {
#line 146
        PrintfP__state = PrintfP__S_STARTED;
        }
    }
  else {
#line 148
    PrintfP__retrySend__postTask();
    }
}

#line 119
static void PrintfP__sendNext(void )
#line 119
{
  int i;
  printf_msg_t *m = (printf_msg_t *)PrintfP__Packet__getPayload(&PrintfP__printfMsg, sizeof(printf_msg_t ));
  uint16_t length_to_send = PrintfP__Queue__size() < sizeof(printf_msg_t ) ? PrintfP__Queue__size() : sizeof(printf_msg_t );

#line 123
  memset(m->buffer, 0, sizeof(printf_msg_t ));
  for (i = 0; i < length_to_send; i++) 
    __nesc_hton_uint8(m->buffer[i].nxdata, PrintfP__Queue__dequeue());
  if (PrintfP__AMSend__send(AM_BROADCAST_ADDR, &PrintfP__printfMsg, sizeof(printf_msg_t )) != SUCCESS) {
    PrintfP__retrySend__postTask();
    }
}

# 135 "../../tos/lib/serial/SerialActiveMessageP.nc"
static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len)
#line 135
{
  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

# 357 "../../tos/lib/serial/SerialP.nc"
static void SerialP__testOff(void )
#line 357
{
  bool turnOff = FALSE;

  /* atomic removed: atomic calls only */
#line 359
  {
    if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
    SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
        turnOff = TRUE;
      }
  }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      /* atomic removed: atomic calls only */
#line 367
      SerialP__offPending = FALSE;
    }
  else {
      /* atomic removed: atomic calls only */
#line 370
      SerialP__offPending = TRUE;
    }
}

# 98 "../../tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void )
#line 98
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
    }
#line 102
    __nesc_atomic_end(__nesc_atomic); }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 155 "../../tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len)
#line 155
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 159
    if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 162
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len = len;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = buf;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 1;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);

  return SUCCESS;
}

# 207 "../../tos/chips/atm1281/HplAtm128UartP.nc"
static void HplAtm128UartP__HplUart0__tx(uint8_t data)
#line 207
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    {
      * (volatile uint8_t *)0XC6 = data;
      * (volatile uint8_t *)0xC0 |= 1 << 6;
    }
#line 211
    __nesc_atomic_end(__nesc_atomic); }
}

# 226 "../../tos/lib/rfxlink/layers/TimeSyncMessageLayerP.nc"
static void /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__SubAMSend__sendDone(message_t *msg, error_t error)
{
  am_id_t id = /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__AMPacket__type(msg);

  /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendRadio__sendDone(id, msg, error);
  /*RF230TimeSyncMessageC.TimeSyncMessageLayerC.TimeSyncMessageLayerP*/TimeSyncMessageLayerP__0__TimeSyncAMSendMilli__sendDone(id, msg, error);
}

# 163 "../../tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, err);
}

# 63 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static activemessage_header_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(msg);
}

# 79 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static ieee154_simple_header_t */*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(msg);
}

# 75 "../../tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len)
{
  if (len > /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength()) {
    return EINVAL;
    }
  if (/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__checkFrame(msg) != SUCCESS) {
    return FAIL;
    }
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(msg, len);
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(msg, /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address());
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(msg, /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup());
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(msg, id);
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(msg, addr);

  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__aboutToSend(id, addr, msg);

  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__send(msg);
}

# 901 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static void RF230DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  for (; 0; ) ;
  for (; 0; ) ;


  __nesc_hton_leuint8(RF230DriverLayerP__getHeader(msg)->length.nxdata, length + 2);
}

# 120 "../../tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void )
#line 120
{
  am_addr_t myAddr;

#line 122
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 122
    myAddr = ActiveMessageAddressC__addr;
#line 122
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

#line 94
static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void )
#line 94
{
  am_group_t myGroup;

#line 96
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 96
    myGroup = ActiveMessageAddressC__group;
#line 96
    __nesc_atomic_end(__nesc_atomic); }
  return myGroup;
}

# 132 "../../tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg)
{

  __nesc_hton_leuint8(/*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata, 0x3f);

  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(msg);
}

#line 127
static network_header_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg);
}

# 103 "../../tos/lib/rfxlink/util/TaskletC.nc"
static void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__resume(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (--/*RF230RadioC.TaskletC*/TaskletC__0__state != 0x80) {
        {
#line 108
          __nesc_atomic_end(__nesc_atomic); 
#line 108
          return;
        }
        }
#line 110
      /*RF230RadioC.TaskletC*/TaskletC__0__state = 1;
    }
#line 111
    __nesc_atomic_end(__nesc_atomic); }

  /*RF230RadioC.TaskletC*/TaskletC__0__doit();
}

#line 78
static void /*RF230RadioC.TaskletC*/TaskletC__0__doit(void )
{
  for (; ; ) 
    {
      /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__run();

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (/*RF230RadioC.TaskletC*/TaskletC__0__state == 1) 
            {
              /*RF230RadioC.TaskletC*/TaskletC__0__state = 0;
              {
#line 89
                __nesc_atomic_end(__nesc_atomic); 
#line 89
                return;
              }
            }
          for (; 0; ) ;
          /*RF230RadioC.TaskletC*/TaskletC__0__state = 1;
        }
#line 94
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 252 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void )
{
  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_RETRY) 
    {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
    }
}

# 436 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static error_t RF230DriverLayerP__RadioSend__send(message_t *msg)
{
  uint16_t time;
  uint32_t time32;
  uint8_t *data;
  uint8_t length;
  uint8_t upload1;
  uint8_t upload2;

  if (((RF230DriverLayerP__cmd != RF230DriverLayerP__CMD_NONE || RF230DriverLayerP__state != RF230DriverLayerP__STATE_RX_ON) || RF230DriverLayerP__radioIrq) || !RF230DriverLayerP__isSpiAcquired()) {
    return EBUSY;
    }
  length = (RF230DriverLayerP__PacketTransmitPower__isSet(msg) ? 
  RF230DriverLayerP__PacketTransmitPower__get(msg) : 0) & RF230_TX_PWR_MASK;

  if (length != RF230DriverLayerP__txPower) 
    {
      RF230DriverLayerP__txPower = length;
      RF230DriverLayerP__writeRegister(RF230_PHY_TX_PWR, RF230_TX_AUTO_CRC_ON | RF230DriverLayerP__txPower);
    }


  if (
#line 457
  RF230DriverLayerP__Config__requiresRssiCca(msg)
   && (RF230DriverLayerP__readRegister(RF230_PHY_RSSI) & RF230_RSSI_MASK) > ((RF230DriverLayerP__rssiClear + RF230DriverLayerP__rssiBusy) >> 3)) 
    {
      RF230DriverLayerP__SpiResource__release();
      return EBUSY;
    }

  RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_PLL_ON);


  time32 = RF230DriverLayerP__LocalTime__get();
  data = RF230DriverLayerP__getPayload(msg);
  length = __nesc_ntoh_leuint8(RF230DriverLayerP__getHeader(msg)->length.nxdata);

  if (RF230DriverLayerP__PacketTimeSyncOffset__isSet(msg)) 
    {

      upload1 = (void *)msg - (void *)data + RF230DriverLayerP__PacketTimeSyncOffset__get(msg);


      upload2 = length - 2 - upload1;


      for (; 0; ) ;
    }
  else 
    {
      upload1 = length - 2;
      upload2 = 0;
    }
  for (; 0; ) ;


  if ((RF230DriverLayerP__readRegister(RF230_TRX_STATUS) & RF230_TRX_STATUS_MASK) != RF230_PLL_ON) 
    {
      for (; 0; ) ;

      RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_RX_ON);
      RF230DriverLayerP__SpiResource__release();
      return EBUSY;
    }


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      RF230DriverLayerP__SLP_TR__set();
      time = RF230DriverLayerP__RadioAlarm__getNow();
    }
#line 504
    __nesc_atomic_end(__nesc_atomic); }
  RF230DriverLayerP__SLP_TR__clr();


  for (; 0; ) ;

  RF230DriverLayerP__SELN__clr();
  RF230DriverLayerP__FastSpiByte__splitWrite(RF230_CMD_FRAME_WRITE);


  RF230DriverLayerP__FastSpiByte__splitReadWrite(length);

  do {
      RF230DriverLayerP__FastSpiByte__splitReadWrite(* data++);
    }
  while (--upload1 != 0);










  time32 += (int16_t )(time + RF230DriverLayerP__TX_SFD_DELAY) - (int16_t )time32;

  if (upload2 != 0) 
    {
      uint32_t absolute = __nesc_ntoh_uint32((* (timesync_absolute_t *)data).nxdata);

#line 535
      __nesc_hton_int32((* (timesync_relative_t *)data).nxdata, absolute - time32);


      for (; 0; ) ;
      do {
          RF230DriverLayerP__FastSpiByte__splitReadWrite(data[upload1]);
        }
      while (++upload1 != upload2);

      __nesc_hton_uint32((* (timesync_absolute_t *)data).nxdata, absolute);
    }


  RF230DriverLayerP__FastSpiByte__splitRead();
  RF230DriverLayerP__SELN__set();
#line 564
  RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_RX_ON);

  RF230DriverLayerP__PacketTimeStamp__set(msg, time32);
#line 581
  RF230DriverLayerP__state = RF230DriverLayerP__STATE_BUSY_TX_2_RX_ON;
  RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_TRANSMIT;

  return SUCCESS;
}

#line 282
static bool RF230DriverLayerP__isSpiAcquired(void )
{
  if (RF230DriverLayerP__SpiResource__isOwner()) {
    return TRUE;
    }
  if (RF230DriverLayerP__SpiResource__immediateRequest() == SUCCESS) 
    {
      return TRUE;
    }

  RF230DriverLayerP__SpiResource__request();
  return FALSE;
}

# 129 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static void Atm128SpiP__startSpi(void )
#line 129
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 131
  {
    Atm128SpiP__Spi__initMaster();
    Atm128SpiP__Spi__enableInterrupt(FALSE);
    Atm128SpiP__Spi__setClockPolarity(FALSE);
    Atm128SpiP__Spi__setClockPhase(FALSE);
    Atm128SpiP__Spi__enableSpi(TRUE);
#line 158
    Atm128SpiP__Spi__setMasterDoubleSpeed(TRUE);
    Atm128SpiP__Spi__setClock(0);
  }

  Atm128SpiP__McuPowerState__update();
}

# 147 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
static void HplAtm128SpiP__SPI__enableSpi(bool enabled)
#line 147
{
  if (enabled) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 6;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 6);
      HplAtm128SpiP__Mcu__update();
    }
}

#line 132
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled)
#line 132
{
  if (enabled) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 7;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 7);
      HplAtm128SpiP__Mcu__update();
    }
}

# 70 "../../tos/system/SimpleArbiterP.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__request(uint8_t id)
#line 70
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__requested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 72
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_IDLE) {
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_GRANTING;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = id;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 77
            SUCCESS;

            {
#line 77
              __nesc_atomic_end(__nesc_atomic); 
#line 77
              return __nesc_temp;
            }
          }
        }
#line 79
      {
        unsigned char __nesc_temp = 
#line 79
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__enqueue(id);

        {
#line 79
          __nesc_atomic_end(__nesc_atomic); 
#line 79
          return __nesc_temp;
        }
      }
    }
#line 82
    __nesc_atomic_end(__nesc_atomic); }
}

# 106 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static rf230_metadata_t *RF230DriverLayerP__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - RF230DriverLayerP__RadioPacket__metadataLength(msg);
}

# 96 "../../tos/system/SimpleArbiterP.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__release(uint8_t id)
#line 96
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_BUSY && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId == id) {
          if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__isEmpty() == FALSE) {
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__dequeue();
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_GRANTING;
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__postTask();
            }
          else {
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__NO_RES;
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_IDLE;
            }
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__unconfigure(id);
          {
            unsigned char __nesc_temp = 
#line 109
            SUCCESS;

            {
#line 109
              __nesc_atomic_end(__nesc_atomic); 
#line 109
              return __nesc_temp;
            }
          }
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
#line 112
  return FAIL;
}

# 80 "../../tos/lib/timer/TransformCounterC.nc"
static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__Counter__get(void )
{
  /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__upper_count_type high = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__m_upper;
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__from_size_type low = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__get();

#line 87
      if (/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__CounterFrom__get();
        }
      {
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__to_size_type high_to = high;
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__to_size_type low_to = low >> /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__1__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 101 "../../tos/chips/rf230/RF230DriverLayerP.nc"
static void *RF230DriverLayerP__getPayload(message_t *msg)
{
  return (void *)msg + RF230DriverLayerP__RadioPacket__headerLength(msg);
}

# 66 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags |= 1 << bit;
}

# 67 "../../tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(message_t *msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 73 "../../tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags &= ~(1 << bit);
}

# 83 "../../tos/chips/atm128/timer/Atm128AlarmC.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__timer_size t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__timer_size dt)
#line 83
{






  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__timer_size now;
#line 92
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__timer_size elapsed;
#line 92
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__timer_size expires;

      ;


      now = /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__get();
      elapsed = now + 3 - t0;
      if (elapsed >= dt) {
        expires = now + 3;
        }
      else {
#line 102
        expires = t0 + dt;
        }



      if (expires == 0) {
        expires = 1;
        }



      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__set(expires - 1);
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__reset();
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__start();
    }
#line 116
    __nesc_atomic_end(__nesc_atomic); }
}

# 84 "../../tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(uint16_t maxBackoff)
{
  uint16_t a;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      a = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom;
      /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom += 273;
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask();

  return a % maxBackoff + /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff();
}

# 217 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error)
{
  for (; 0; ) ;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError = error;
  if (error == SUCCESS) {
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_DONE;
    }
  else {
#line 225
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
    }
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
}

# 116 "../../tos/lib/rfxlink/util/TaskletC.nc"
static void /*RF230RadioC.TaskletC*/TaskletC__0__Tasklet__schedule(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*RF230RadioC.TaskletC*/TaskletC__0__state != 0) 
        {
          /*RF230RadioC.TaskletC*/TaskletC__0__state |= 0x80;
          {
#line 123
            __nesc_atomic_end(__nesc_atomic); 
#line 123
            return;
          }
        }
      /*RF230RadioC.TaskletC*/TaskletC__0__state = 1;
    }
#line 127
    __nesc_atomic_end(__nesc_atomic); }

  /*RF230RadioC.TaskletC*/TaskletC__0__doit();
}

# 134 "../../tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ) ? TRUE : FALSE;
}

#line 207
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg)
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(msg)
   && /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg)
   && /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg) == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress();
}

# 96 "../../tos/system/SimpleArbiterP.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id)
#line 96
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    {
      if (/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY && /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId == id) {
          if (/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty() == FALSE) {
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue();
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
            }
          else {
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE;
            }
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(id);
          {
            unsigned char __nesc_temp = 
#line 109
            SUCCESS;

            {
#line 109
              __nesc_atomic_end(__nesc_atomic); 
#line 109
              return __nesc_temp;
            }
          }
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
#line 112
  return FAIL;
}

# 153 "../../tos/lib/ftsp/TimeSyncP.nc"
static error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__GlobalTime__local2Global(uint32_t *time)
{
  *time += /*TimeSyncC.TimeSyncP*/TimeSyncP__0__offsetAverage + (int32_t )(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__skew * (int32_t )(*time - /*TimeSyncC.TimeSyncP*/TimeSyncP__0__localAverage));
  return /*TimeSyncC.TimeSyncP*/TimeSyncP__0__is_synced();
}

#line 144
static error_t /*TimeSyncC.TimeSyncP*/TimeSyncP__0__is_synced(void )
{
  if (/*TimeSyncC.TimeSyncP*/TimeSyncP__0__numEntries >= /*TimeSyncC.TimeSyncP*/TimeSyncP__0__ENTRY_VALID_LIMIT || __nesc_ntoh_uint16(/*TimeSyncC.TimeSyncP*/TimeSyncP__0__outgoingMsg->rootID.nxdata) == TOS_NODE_ID) {
    return SUCCESS;
    }
  else {
#line 149
    return FAIL;
    }
}

#line 232
static void /*TimeSyncC.TimeSyncP*/TimeSyncP__0__clearTable(void )
{
  int8_t i;

#line 235
  for (i = 0; i < /*TimeSyncC.TimeSyncP*/TimeSyncP__0__MAX_ENTRIES; ++i) 
    /*TimeSyncC.TimeSyncP*/TimeSyncP__0__table[i].state = /*TimeSyncC.TimeSyncP*/TimeSyncP__0__ENTRY_EMPTY;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 238
    /*TimeSyncC.TimeSyncP*/TimeSyncP__0__numEntries = 0;
#line 238
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "../../tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

#line 159
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

#line 144
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 250 "../../tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 250
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt = ndt;
    }
#line 256
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt();
}

#line 128
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt(void )
#line 128
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get();
      uint8_t newOcr2A;
      uint8_t tifr2 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag();

#line 139
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT) || tifr2 & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 147
            __nesc_atomic_end(__nesc_atomic); 
#line 147
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set) {
          newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get();

#line 158
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set = FALSE;
              fired = TRUE;
              newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT) {
                newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT;
                }
              else {
#line 174
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT) {
                  newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT;
                  }
                else {
#line 177
                  newOcr2A = alarm_in;
                  }
                }
            }
        }
#line 180
      newOcr2A--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setOcr2A(newOcr2A);
    }
#line 182
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__fired();
    }
}

# 69 "../../tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC__seed = mlcg;
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 75 "../../tos/system/GenericSlotterP.nc"
static error_t GenericSlotterP__SlotterControl__synchronize(uint8_t toSlot)
#line 75
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 76
    GenericSlotterP__slot = toSlot - 1;
#line 76
    __nesc_atomic_end(__nesc_atomic); }

  GenericSlotterP__Alarm__stop();
  GenericSlotterP__Alarm__fired();
  return SUCCESS;
}

#line 112
static void GenericSlotterP__Alarm__fired(void )
#line 112
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 113
    GenericSlotterP__nextFire = GenericSlotterP__Alarm__getNow() + GenericSlotterP__slotLength;
#line 113
    __nesc_atomic_end(__nesc_atomic); }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 114
    GenericSlotterP__slot = (GenericSlotterP__slot + 1) % GenericSlotterP__frameLength;
#line 114
    __nesc_atomic_end(__nesc_atomic); }
  GenericSlotterP__Slotter__slot(GenericSlotterP__slot);

  GenericSlotterP__Alarm__start(GenericSlotterP__slotLength);
}

# 80 "../../tos/lib/timer/TransformCounterC.nc"
static /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get(void )
{
  /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type high = /*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper;
      /*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type low = /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get();

#line 87
      if (/*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type high_to = high;
        /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type low_to = low >> /*Counter32khz32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*Counter32khz32C.Transform32*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 136 "../../tos/system/LedsP.nc"
static void LedsP__Leds__set(uint8_t val)
#line 136
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 137
    {
      if (val & LEDS_LED0) {
          LedsP__Leds__led0On();
        }
      else {
          LedsP__Leds__led0Off();
        }
      if (val & LEDS_LED1) {
          LedsP__Leds__led1On();
        }
      else {
          LedsP__Leds__led1Off();
        }
      if (val & LEDS_LED2) {
          LedsP__Leds__led2On();
        }
      else {
          LedsP__Leds__led2Off();
        }
    }
#line 156
    __nesc_atomic_end(__nesc_atomic); }
}

# 130 "../../tos/lib/printf/PrintfP.nc"
  int printfflush(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (PrintfP__state == PrintfP__S_FLUSHING) 
        {
          int __nesc_temp = 
#line 133
          SUCCESS;

          {
#line 133
            __nesc_atomic_end(__nesc_atomic); 
#line 133
            return __nesc_temp;
          }
        }
#line 134
      if (PrintfP__Queue__empty()) 
        {
          int __nesc_temp = 
#line 135
          FAIL;

          {
#line 135
            __nesc_atomic_end(__nesc_atomic); 
#line 135
            return __nesc_temp;
          }
        }
#line 136
      PrintfP__state = PrintfP__S_FLUSHING;
    }
#line 137
    __nesc_atomic_end(__nesc_atomic); }
  PrintfP__sendNext();
  return SUCCESS;
}

# 25 "PrioCritQueueP.nc"
static uint8_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__size(void )
#line 25
{
  return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__size() + /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__size() + /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__size();
}

# 76 "../../tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void )
{
  error_t error;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    error = EBUSY;
    }
  else {
      error = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn();

      if (error == SUCCESS) {
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_ON;
        }
    }
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return error;
}

# 107 "../../tos/lib/timer/TransformAlarmC.nc"
static void /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm(void )
{
  /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type now = /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get();
#line 109
  /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type expires;
#line 109
  /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type remaining;




  expires = /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 + /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt;


  remaining = (/*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 <= now) 
    {
      if (expires >= /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 = now + /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY;
      /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt = remaining - /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 += /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt;
      /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt = 0;
    }
  /*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__startAt((/*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type )now << 5, 
  (/*GenericSlotterC.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type )remaining << 5);
}

# 102 "PrioCritQueueP.nc"
static /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__queue_t /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__dequeuePrio(uint8_t prio)
#line 102
{
  switch (prio) {
      case 1: return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__dequeue();
      case 2: return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__dequeue();
      case 3: return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__dequeue();
      default: return /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__null_elt;
    }
}

# 89 "../../tos/system/QueueC.nc"
static /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__queue_t /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__dequeue(void )
#line 89
{
  /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__queue_t t = /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__head();

#line 91
  ;
  if (!/*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__Queue__empty()) {
      /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__head++;
      if (/*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__head == 20) {
#line 94
        /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__head = 0;
        }
#line 95
      /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__size--;
      /*TdmaMacC.PrioCritQueueC.Q1*/QueueC__1__printQueue();
    }
  return t;
}

#line 89
static /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__queue_t /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__dequeue(void )
#line 89
{
  /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__queue_t t = /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__head();

#line 91
  ;
  if (!/*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__Queue__empty()) {
      /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__head++;
      if (/*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__head == 20) {
#line 94
        /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__head = 0;
        }
#line 95
      /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__size--;
      /*TdmaMacC.PrioCritQueueC.Q2*/QueueC__2__printQueue();
    }
  return t;
}

#line 89
static /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__queue_t /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__dequeue(void )
#line 89
{
  /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__queue_t t = /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__head();

#line 91
  ;
  if (!/*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__Queue__empty()) {
      /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__head++;
      if (/*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__head == 20) {
#line 94
        /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__head = 0;
        }
#line 95
      /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__size--;
      /*TdmaMacC.PrioCritQueueC.Q3*/QueueC__3__printQueue();
    }
  return t;
}

# 129 "PrioCritQueueP.nc"
static void /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__PrioCritQueue__clear(void )
#line 129
{
  while (/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__size() > 0) /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio1Queue__dequeue();
  while (/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__size() > 0) /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio2Queue__dequeue();
  while (/*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__size() > 0) /*TdmaMacC.PrioCritQueueC.QP*/PrioCritQueueP__0__prio3Queue__dequeue();
}

# 226 "../../tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
__attribute((interrupt))   void __vector_17(void )
#line 226
{
  HplAtm1281Timer1P__CompareA__fired();
}

__attribute((interrupt))   void __vector_18(void )
#line 230
{
  HplAtm1281Timer1P__CompareB__fired();
}

__attribute((interrupt))   void __vector_19(void )
#line 234
{
  HplAtm1281Timer1P__CompareC__fired();
}

__attribute((interrupt))   void __vector_16(void )
#line 238
{
  HplAtm1281Timer1P__Capture__captured(HplAtm1281Timer1P__Capture__get());
}

__attribute((interrupt))   void __vector_20(void )
#line 242
{
  HplAtm1281Timer1P__Timer__overflow();
}

# 242 "../../tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
__attribute((signal))   void __vector_13(void )
#line 242
{
  HplAtm1281Timer2AsyncP__stabiliseTimer2();


  HplAtm1281Timer2AsyncP__Compare__fired();
}


__attribute((signal))   void __vector_15(void )
#line 250
{
  HplAtm1281Timer2AsyncP__stabiliseTimer2();

  HplAtm1281Timer2AsyncP__Timer__overflow();
}

# 119 "../../tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_24(void )
#line 119
{
  HplAtm128SpiP__SPI__dataReady(HplAtm128SpiP__SPI__read());
}

# 173 "../../tos/chips/atm128/spi/Atm128SpiP.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx)
#line 173
{










  Atm128SpiP__Spi__write(tx);

  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;

  return Atm128SpiP__Spi__read();
}

# 214 "../../tos/chips/atm1281/HplAtm128UartP.nc"
__attribute((signal))   void __vector_25(void )
#line 214
{
  if ((* (volatile uint8_t *)0xC0 & (1 << 7)) != 0) {
      HplAtm128UartP__HplUart0__rxDone(* (volatile uint8_t *)0XC6);
    }
}

# 412 "../../tos/lib/serial/SerialP.nc"
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data)
#line 412
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxProto = data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            SerialP__rxCRC = crcByte(SerialP__rxCRC, data);
            if (SerialP__rxProto == SERIAL_PROTO_PACKET_ACK) {
              SerialP__rxState = SerialP__RXSTATE_TOKEN;
              }
            else {
#line 433
              SerialP__rxState = SerialP__RXSTATE_INFO;
              }
#line 434
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        if (SerialP__rxProto == SERIAL_PROTO_PACKET_ACK) {
                          SerialP__ack_queue_push(SerialP__rxSeqno);
                          }
#line 459
                        SerialP__rxInit();
                        SerialP__SerialFrameComm__resetReceive();
                        if (SerialP__offPending) {
                            SerialP__rxState = SerialP__RXSTATE_INACTIVE;
                            SerialP__testOff();
                          }
                        goto done;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

# 92 "../../tos/chips/atm128/crc.h"
static __attribute((noinline))  uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  const uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 296 "../../tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
#line 296
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 298
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
#line 308
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

# 220 "../../tos/chips/atm1281/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_27(void )
#line 220
{
  HplAtm128UartP__HplUart0__txDone();
}

# 106 "../../tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data)
#line 106
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 308 "../../tos/chips/atm1281/HplAtm128UartP.nc"
__attribute((signal))   void __vector_36(void )
#line 308
{
  if ((* (volatile uint8_t *)0xC8 & (1 << 7)) != 0) {
    HplAtm128UartP__HplUart1__rxDone(* (volatile uint8_t *)0XCE);
    }
}

#line 313
__attribute((interrupt))   void __vector_38(void )
#line 313
{
  HplAtm128UartP__HplUart1__txDone();
}

# 226 "../../tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
__attribute((interrupt))   void __vector_32(void )
#line 226
{
  HplAtm1281Timer3P__CompareA__fired();
}

__attribute((interrupt))   void __vector_33(void )
#line 230
{
  HplAtm1281Timer3P__CompareB__fired();
}

__attribute((interrupt))   void __vector_34(void )
#line 234
{
  HplAtm1281Timer3P__CompareC__fired();
}

__attribute((interrupt))   void __vector_31(void )
#line 238
{
  HplAtm1281Timer3P__Capture__captured(HplAtm1281Timer3P__Capture__get());
}

__attribute((interrupt))   void __vector_35(void )
#line 242
{
  HplAtm1281Timer3P__Timer__overflow();
}

# 110 "../../tos/lib/printf/PutcharP.nc"
__attribute((noinline))   int uart_putchar(char c, FILE *stream)
#line 110
{








  return PutcharP__Putchar__putchar(c);
}

