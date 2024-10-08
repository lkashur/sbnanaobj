//  SRInteractionDLP.h
// \author  mueller@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SRPARTICLETRUTHDLP_H
#define SRPARTICLETRUTHDLP_H

#include <vector>
#include <array>
#include <stdint.h>
#include <string>

namespace caf
{
  //class SRParticleDLP;
  /// The SRParticleTruthDLP is a representation of an particle as
  /// defined/reconstructed by the Deep Learn Physics Machine Learning
  /// reconstruction.
  class SRParticleTruthDLP
  {
  public:
    SRParticleTruthDLP();
    ~SRParticleTruthDLP() {  }

    std::string ancestor_creation_process; //!<
    int64_t ancestor_pdg_code;             //!<
    std::array<float, 3> ancestor_position;//!<
    double ancestor_t;                     //!<
    int64_t ancestor_track_id;             //!<
    double calo_ke;                        //!<
    std::vector<int64_t> children_counts;  //!<
    std::vector<int64_t> children_id;      //!<
    double cathode_offset;                 //!<
    std::string creation_process;          //!<
    double csda_ke;                        //!<
    float depositions_adapt_sum;           //!<
    float depositions_adapt_q_sum;         //!<
    int64_t depositions_g4_sum;            //!<
    float depositions_sum;                 //!<
    double depositions_q_sum;              //!<
    double distance_travel;                //!<
    std::array<float, 3> end_dir;          //!<
    std::array<float, 3> end_momentum;     //!<
    float end_p;                           //!<
    std::array<float, 3> end_point;        //!<
    std::array<float, 3> end_position;     //!<
    double end_t;                          //!<
    double energy_deposit;                 //!<
    double energy_init;                    //!<
    std::array<float, 3> first_step;       //!<
    std::vector<int32_t> fragment_ids;     //!<
    int64_t gen_id;                        //!<
    int64_t group_id;                      //!<
    int64_t group_primary;                 //!<
    int64_t id;                            //!<
    std::vector<int64_t> index;            //!<
    std::vector<int64_t> index_adapt;      //!<
    std::vector<int64_t> index_g4;         //!<
    int64_t interaction_id;                //!<
    int64_t interaction_primary;           //!<
    bool is_cathode_crosser;               //!<
    bool is_contained;                     //!<
    bool is_matched;                       //!<
    bool is_primary;                       //!<
    bool is_truth;                         //!<
    bool is_valid;                         //!<
    double ke;                             //!<
    std::array<float, 3> last_step;        //!<
    double length;                         //!<
    double mass;                           //!<
    std::vector<int64_t> match_ids;        //!<
    std::vector<float> match_overlaps;     //!<
    double mcs_ke;                         //!<
    int64_t mcst_index;                    //!<
    int64_t mct_index;                     //!<
    std::vector<int64_t> module_ids;       //!<
    std::array<float, 3> momentum;         //!<
    int64_t nu_id;                         //!<
    int64_t num_fragments;                 //!<
    int64_t num_voxels;                    //!<
    int64_t orig_id;                       //!<
    int64_t orig_interaction_id;           //!<
    double p;                              //!<
    std::string parent_creation_process;   //!<
    int64_t parent_id;                     //!<
    int64_t parent_pdg_code;               //!<
    std::array<float, 3> parent_position;  //!<
    double parent_t;                       //!<
    double parent_track_id;                //!<
    int64_t pdg_code;                      //!<
    int64_t pid;                           //!<
    std::array<float, 3> position;         //!<
    std::array<float, 3> reco_end_dir;     //!<
    double reco_length;                    //!<
    std::array<float, 3> reco_start_dir;   //!<
    int64_t shape;                         //!<
    int64_t size;                          //!<
    int64_t size_adapt;                    //!<
    int64_t size_g4;                       //!<
    std::array<float, 3> start_dir;        //!<
    std::array<float, 3> start_point;      //!<
    double t;                              //!<
    int64_t track_id;                      //!<
    std::string units;                     //!<
  };

} // end namespace

#endif // SRPARTICLETRUTHDLP_H
////////////////////////////////////////////////////////////////////////
