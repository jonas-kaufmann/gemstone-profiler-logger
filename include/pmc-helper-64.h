#ifndef PMC_HELPER_H_
#define PMC_HELPER_H_

#define EVENT_ARRAY_LEN 10

inline void init_pmcs();
inline void set_selected_counter(int counter);
inline void set_event_for_selected_counter(int event_id) ;
inline int get_event_for_selected_counter() ;
inline uint32_t get_count_for_selected_counter();

inline void get_six_event_ids(int *ids) ; // old
inline void get_six_counts(int *counts) ; // old
inline void set_six_event_ids(int events[6]) ; // old

inline uint32_t get_cpu_id_code();
inline uint32_t get_no_counters() ;


inline void set_events(int *events, int num_events);
inline void get_events(int *events);
inline void get_counts(uint32_t *counts);

#endif