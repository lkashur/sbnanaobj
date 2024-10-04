////////////////////////////////////////////////////////////////////////
// \file    SRParticleTruthDLP.cxx
// \brief   SRParticleTruthDLP holds ML particle information.
// \author  mueller@fnal.gov
////////////////////////////////////////////////////////////////////////

#include <limits>
#include <vector>
#include "SRParticleTruthDLP.h"

namespace caf
{
  SRParticleTruthDLP::SRParticleTruthDLP():
    ancestor_creation_process(),
    ancestor_pdg_code(-1),
    ancestor_position(std::vector<float>()),
    ancestor_t(std::numeric_limits<double>::signaling_NaN()),
    ancestor_track_id(-1),
    calo_ke(-1.0),
    children_counts(std::vector<int64_t>()),
    cathode_offset(-1.0),
    csda_ke(-1.0),
    depositions_sum(-1.0),
    distance_travel(-1.0),
    end_dir{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    end_point{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    end_position{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    energy_deposit(std::numeric_limits<double>::signaling_NaN()),
    energy_init(std::numeric_limits<double>::signaling_NaN()),
    first_step(std::vector<float>()),
    fragment_ids(std::vector<int64_t>()),
    group_id(-1),
    id(-1),
    index(std::vector<int64_t>()),
    interaction_id(-1),
    is_cathode_crosser(false),
    is_contained(false),
    is_matched(false),
    is_primary(false),
    is_valid(false),
    ke(-1),
    last_step(std::vector<float>()),
    length(-1),
    match_ids(std::vector<int64_t>()),
    match_overlaps(std::vector<float>()),
    mcs_ke(-1),
    mcst_index(-1),
    mct_index(-1),
    module_ids(std::vector<int32_t>()),
    momentum{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    nu_id(-1),
    num_fragments(-1),
    num_voxels(-1),
    p(std::numeric_limits<double>::signaling_NaN()),
    parent_creation_process(),
    parent_id(-1),
    parent_pdg_code(0),
    parent_position{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    parent_t(std::numeric_limits<double>::signaling_NaN()),
    parent_track_id(-1),
    pdg_code(0),
    pid(-1),
    position{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    shape(-1),
    size(0),
    start_dir{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    start_point{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    t(std::numeric_limits<double>::signaling_NaN()),
    track_id(-1),
    units() {  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////

